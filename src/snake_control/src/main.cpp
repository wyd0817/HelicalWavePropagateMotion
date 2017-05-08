/*
 * main.cpp
 *
 *  Created on: Feb 20, 2017
 *      Author: ubuntu-ti
 */

#include <ros/ros.h>
#include <joy_handler_hori/JoySelectedData.h>

#include "robot_spec.h"
#include "snake_control.h"


joy_handler_hori::JoySelectedData joystick;

//for test
void callback(joy_handler_hori::JoySelectedData joy_selected_data)
{
	if(joy_selected_data.button_circle){
		ROS_INFO("joy_selected_data.button_circle");
	}

	if(joy_selected_data.button_cross){
		ROS_INFO("joy_selected_data.button_cross");
	}

	if(joy_selected_data.button_triangle){
		ROS_INFO("joy_selected_data.button_triangle");
	}

	if(joy_selected_data.button_square){
		ROS_INFO("joy_selected_data.button_square");
	}

	if(joy_selected_data.button_ps){
		ROS_INFO("joy_selected_data.button_ps");
	}

	if(joy_selected_data.button_select){
		ROS_INFO("joy_selected_data.button_select");
	}

	if(joy_selected_data.button_start){
		ROS_INFO("joy_selected_data.button_start");
	}
}


// 通常
void timerCallback(const ros::TimerEvent& event)
{
	static int mode = 0;

	if (joystick.button_ps) {
		mode = 0;    //ストップモード
		ROS_INFO("Stop mode -->");
	}

	if (joystick.button_select and joystick.button_triangle) {
		mode=1;    //Inchworm Gait
		ROS_INFO("Inchworm Gait -->");
	}

    if(mode==1){	//Inchworm Gait
    	//SnakeControl::OperateMoveWindingShift(joystick);
    	SnakeControl::OperateMoveInchwormGait(joystick);
    }

	if (joystick.button_select and joystick.button_circle) {
		mode=2;    //helical wave propagate motion
		ROS_INFO("***  Helical Wave Propagate Motion -->  ***");
	}

    if(mode==2){
    	SnakeControl::OperateMoveHelicalWavePropagateMotion(joystick);
    }


    if (joystick.button_r3 ){	//ノード再起動
    	pid_t pid;
    	char path_name[64];
    	char process_name[64];
    	char arg_name[64];
    	strcpy( path_name, "/opt/ros/indigo/bin/" );
    	strcpy( process_name, "rosrun" );
    	strcpy( arg_name, "snake_control snake_control_node" );
    	pid = fork();

    	switch( pid ){
    	case -1:
    		perror( "fork failed" );
    		exit(1);
    	case 0: // 子プロセス
    		chdir( path_name );
    		execl( process_name, process_name, "snake_control", "snake_control_node", (char *)NULL);
    		//execl( process_name, process_name, (char *)NULL );
    		break;
    	default: // 親プロセス
    		break;
    	}
    	ros::Duration(0.5).sleep();
    }
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "snake_control");
	ROS_INFO("snake_control node initialized !");

	ros::NodeHandle nh;
	nh.param("loop_rate", SnakeControl::loop_rate_, 50.0);

	SnakeControl::Initialize();

	ros::Subscriber sub_joy_selected_data =
			nh.subscribe("joy_selected_data", 1, &SnakeControl::CallBackOfJoySelectedData);

	ros::NodeHandle nh_timer;
	SnakeControl::sampling_time_ = 1.0/SnakeControl::loop_rate_;  // サンプリング時間を設定

	// タイマーを作る Durationの単位は[sec]
	ros::Timer timer = nh_timer.createTimer(ros::Duration(SnakeControl::sampling_time_), timerCallback);
	ros::spin();
}
