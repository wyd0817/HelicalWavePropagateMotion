// Generated by gencpp from file snake_msgs/SnakeJointError.msg
// DO NOT EDIT!


#ifndef SNAKE_MSGS_MESSAGE_SNAKEJOINTERROR_H
#define SNAKE_MSGS_MESSAGE_SNAKEJOINTERROR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace snake_msgs
{
template <class ContainerAllocator>
struct SnakeJointError_
{
  typedef SnakeJointError_<ContainerAllocator> Type;

  SnakeJointError_()
    : timestamp()
    , joint_index(0)
    , cannot_receive_data(false)
    , input_voltage(false)
    , mcu_temperature(false)
    , motor_temperature(false)
    , overload(false)  {
    }
  SnakeJointError_(const ContainerAllocator& _alloc)
    : timestamp()
    , joint_index(0)
    , cannot_receive_data(false)
    , input_voltage(false)
    , mcu_temperature(false)
    , motor_temperature(false)
    , overload(false)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef uint8_t _joint_index_type;
  _joint_index_type joint_index;

   typedef uint8_t _cannot_receive_data_type;
  _cannot_receive_data_type cannot_receive_data;

   typedef uint8_t _input_voltage_type;
  _input_voltage_type input_voltage;

   typedef uint8_t _mcu_temperature_type;
  _mcu_temperature_type mcu_temperature;

   typedef uint8_t _motor_temperature_type;
  _motor_temperature_type motor_temperature;

   typedef uint8_t _overload_type;
  _overload_type overload;




  typedef boost::shared_ptr< ::snake_msgs::SnakeJointError_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snake_msgs::SnakeJointError_<ContainerAllocator> const> ConstPtr;

}; // struct SnakeJointError_

typedef ::snake_msgs::SnakeJointError_<std::allocator<void> > SnakeJointError;

typedef boost::shared_ptr< ::snake_msgs::SnakeJointError > SnakeJointErrorPtr;
typedef boost::shared_ptr< ::snake_msgs::SnakeJointError const> SnakeJointErrorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snake_msgs::SnakeJointError_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snake_msgs::SnakeJointError_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace snake_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'snake_msgs': ['/home/ubuntu-ti/catkin_ws/src/snake_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::snake_msgs::SnakeJointError_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snake_msgs::SnakeJointError_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_msgs::SnakeJointError_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_msgs::SnakeJointError_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_msgs::SnakeJointError_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_msgs::SnakeJointError_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snake_msgs::SnakeJointError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01959fb127e032fa0cdcc3809ae3e57d";
  }

  static const char* value(const ::snake_msgs::SnakeJointError_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01959fb127e032faULL;
  static const uint64_t static_value2 = 0x0cdcc3809ae3e57dULL;
};

template<class ContainerAllocator>
struct DataType< ::snake_msgs::SnakeJointError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snake_msgs/SnakeJointError";
  }

  static const char* value(const ::snake_msgs::SnakeJointError_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snake_msgs::SnakeJointError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "###########################################################\n\
# 関節のエラーに関する情報を投げるためのmsg型\n\
# エラーが起きているとtrue\n\
###########################################################\n\
\n\
time timestamp\n\
uint8 joint_index         # index number of joint\n\
bool cannot_receive_data  # MCU could not receive data from sarvo.\n\
bool input_voltage        # Input voltage of sarvo is too low or too high.  Motor is forced to stop.\n\
bool mcu_temperature      # Temperature of MCU of sarvo is too high. Motor is forced to stop.\n\
bool motor_temperature    # Temperature of motor is too high. Motor is forced to stop.\n\
bool overload             # Current of motor is too high.\n\
\n\
";
  }

  static const char* value(const ::snake_msgs::SnakeJointError_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snake_msgs::SnakeJointError_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.joint_index);
      stream.next(m.cannot_receive_data);
      stream.next(m.input_voltage);
      stream.next(m.mcu_temperature);
      stream.next(m.motor_temperature);
      stream.next(m.overload);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SnakeJointError_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snake_msgs::SnakeJointError_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::snake_msgs::SnakeJointError_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "joint_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.joint_index);
    s << indent << "cannot_receive_data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cannot_receive_data);
    s << indent << "input_voltage: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.input_voltage);
    s << indent << "mcu_temperature: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mcu_temperature);
    s << indent << "motor_temperature: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_temperature);
    s << indent << "overload: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.overload);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SNAKE_MSGS_MESSAGE_SNAKEJOINTERROR_H
