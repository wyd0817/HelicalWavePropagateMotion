// Generated by gencpp from file snake_msgs/SnakeCOPCommand.msg
// DO NOT EDIT!


#ifndef SNAKE_MSGS_MESSAGE_SNAKECOPCOMMAND_H
#define SNAKE_MSGS_MESSAGE_SNAKECOPCOMMAND_H


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
struct SnakeCOPCommand_
{
  typedef SnakeCOPCommand_<ContainerAllocator> Type;

  SnakeCOPCommand_()
    : cop_index(0)
    , target_all(false)
    , read_data(false)  {
    }
  SnakeCOPCommand_(const ContainerAllocator& _alloc)
    : cop_index(0)
    , target_all(false)
    , read_data(false)  {
  (void)_alloc;
    }



   typedef uint8_t _cop_index_type;
  _cop_index_type cop_index;

   typedef uint8_t _target_all_type;
  _target_all_type target_all;

   typedef uint8_t _read_data_type;
  _read_data_type read_data;




  typedef boost::shared_ptr< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> const> ConstPtr;

}; // struct SnakeCOPCommand_

typedef ::snake_msgs::SnakeCOPCommand_<std::allocator<void> > SnakeCOPCommand;

typedef boost::shared_ptr< ::snake_msgs::SnakeCOPCommand > SnakeCOPCommandPtr;
typedef boost::shared_ptr< ::snake_msgs::SnakeCOPCommand const> SnakeCOPCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0f653502197b950088dfaf6371a5c617";
  }

  static const char* value(const ::snake_msgs::SnakeCOPCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0f653502197b9500ULL;
  static const uint64_t static_value2 = 0x88dfaf6371a5c617ULL;
};

template<class ContainerAllocator>
struct DataType< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snake_msgs/SnakeCOPCommand";
  }

  static const char* value(const ::snake_msgs::SnakeCOPCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "###########################################################\n\
# ロボットにCOP Sensor関係のデータを要求するためのmsg型\n\
# 必要なデータの形式に関するread_*trueにする\n\
###########################################################\n\
\n\
uint8 cop_index\n\
bool target_all\n\
bool read_data\n\
\n\
";
  }

  static const char* value(const ::snake_msgs::SnakeCOPCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cop_index);
      stream.next(m.target_all);
      stream.next(m.read_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SnakeCOPCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snake_msgs::SnakeCOPCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::snake_msgs::SnakeCOPCommand_<ContainerAllocator>& v)
  {
    s << indent << "cop_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cop_index);
    s << indent << "target_all: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.target_all);
    s << indent << "read_data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.read_data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SNAKE_MSGS_MESSAGE_SNAKECOPCOMMAND_H
