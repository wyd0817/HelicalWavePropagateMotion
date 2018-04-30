// Generated by gencpp from file snake_msgs/snake_joint_data.msg
// DO NOT EDIT!


#ifndef SNAKE_MSGS_MESSAGE_SNAKE_JOINT_DATA_H
#define SNAKE_MSGS_MESSAGE_SNAKE_JOINT_DATA_H


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
struct snake_joint_data_
{
  typedef snake_joint_data_<ContainerAllocator> Type;

  snake_joint_data_()
    : timestamp()
    , joint_index(0)
    , value(0.0)  {
    }
  snake_joint_data_(const ContainerAllocator& _alloc)
    : timestamp()
    , joint_index(0)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef uint8_t _joint_index_type;
  _joint_index_type joint_index;

   typedef double _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::snake_msgs::snake_joint_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snake_msgs::snake_joint_data_<ContainerAllocator> const> ConstPtr;

}; // struct snake_joint_data_

typedef ::snake_msgs::snake_joint_data_<std::allocator<void> > snake_joint_data;

typedef boost::shared_ptr< ::snake_msgs::snake_joint_data > snake_joint_dataPtr;
typedef boost::shared_ptr< ::snake_msgs::snake_joint_data const> snake_joint_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snake_msgs::snake_joint_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snake_msgs::snake_joint_data_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::snake_msgs::snake_joint_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snake_msgs::snake_joint_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_msgs::snake_joint_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_msgs::snake_joint_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_msgs::snake_joint_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_msgs::snake_joint_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snake_msgs::snake_joint_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b2418713fe8bd426760979ef53a0a44a";
  }

  static const char* value(const ::snake_msgs::snake_joint_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb2418713fe8bd426ULL;
  static const uint64_t static_value2 = 0x760979ef53a0a44aULL;
};

template<class ContainerAllocator>
struct DataType< ::snake_msgs::snake_joint_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snake_msgs/snake_joint_data";
  }

  static const char* value(const ::snake_msgs::snake_joint_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snake_msgs::snake_joint_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "###########################################################\n\
# 関節に関するデータのためのmsg型\n\
# 位置や速度，電流など，関節に関するどのデータにもこの型を使い，\n\
# topic名で内容を区別する\n\
###########################################################\n\
\n\
time timestamp\n\
uint8 joint_index\n\
float64 value\n\
";
  }

  static const char* value(const ::snake_msgs::snake_joint_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snake_msgs::snake_joint_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.joint_index);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct snake_joint_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snake_msgs::snake_joint_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::snake_msgs::snake_joint_data_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "joint_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.joint_index);
    s << indent << "value: ";
    Printer<double>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SNAKE_MSGS_MESSAGE_SNAKE_JOINT_DATA_H