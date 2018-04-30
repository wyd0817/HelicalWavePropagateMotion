// Generated by gencpp from file snake_msgs/SnakeIMUCommand.msg
// DO NOT EDIT!


#ifndef SNAKE_MSGS_MESSAGE_SNAKEIMUCOMMAND_H
#define SNAKE_MSGS_MESSAGE_SNAKEIMUCOMMAND_H


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
struct SnakeIMUCommand_
{
  typedef SnakeIMUCommand_<ContainerAllocator> Type;

  SnakeIMUCommand_()
    : imu_index(0)
    , read_roll_pitch_yaw(false)
    , read_gyro(false)
    , read_accel(false)  {
    }
  SnakeIMUCommand_(const ContainerAllocator& _alloc)
    : imu_index(0)
    , read_roll_pitch_yaw(false)
    , read_gyro(false)
    , read_accel(false)  {
  (void)_alloc;
    }



   typedef uint8_t _imu_index_type;
  _imu_index_type imu_index;

   typedef uint8_t _read_roll_pitch_yaw_type;
  _read_roll_pitch_yaw_type read_roll_pitch_yaw;

   typedef uint8_t _read_gyro_type;
  _read_gyro_type read_gyro;

   typedef uint8_t _read_accel_type;
  _read_accel_type read_accel;




  typedef boost::shared_ptr< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> const> ConstPtr;

}; // struct SnakeIMUCommand_

typedef ::snake_msgs::SnakeIMUCommand_<std::allocator<void> > SnakeIMUCommand;

typedef boost::shared_ptr< ::snake_msgs::SnakeIMUCommand > SnakeIMUCommandPtr;
typedef boost::shared_ptr< ::snake_msgs::SnakeIMUCommand const> SnakeIMUCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "15cc8c33a9577e0f807fde7df107ac7e";
  }

  static const char* value(const ::snake_msgs::SnakeIMUCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x15cc8c33a9577e0fULL;
  static const uint64_t static_value2 = 0x807fde7df107ac7eULL;
};

template<class ContainerAllocator>
struct DataType< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snake_msgs/SnakeIMUCommand";
  }

  static const char* value(const ::snake_msgs::SnakeIMUCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "###########################################################\n\
# ロボットにIMU関係のデータを要求するためのmsg型\n\
# 必要なデータの形式に関するread_*trueにする\n\
###########################################################\n\
\n\
uint8 imu_index\n\
bool read_roll_pitch_yaw\n\
bool read_gyro\n\
bool read_accel\n\
";
  }

  static const char* value(const ::snake_msgs::SnakeIMUCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.imu_index);
      stream.next(m.read_roll_pitch_yaw);
      stream.next(m.read_gyro);
      stream.next(m.read_accel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SnakeIMUCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snake_msgs::SnakeIMUCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::snake_msgs::SnakeIMUCommand_<ContainerAllocator>& v)
  {
    s << indent << "imu_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.imu_index);
    s << indent << "read_roll_pitch_yaw: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.read_roll_pitch_yaw);
    s << indent << "read_gyro: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.read_gyro);
    s << indent << "read_accel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.read_accel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SNAKE_MSGS_MESSAGE_SNAKEIMUCOMMAND_H
