// Generated by gencpp from file p2os_msgs/ArmState.msg
// DO NOT EDIT!


#ifndef P2OS_MSGS_MESSAGE_ARMSTATE_H
#define P2OS_MSGS_MESSAGE_ARMSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace p2os_msgs
{
template <class ContainerAllocator>
struct ArmState_
{
  typedef ArmState_<ContainerAllocator> Type;

  ArmState_()
    : arm_power(false)  {
    }
  ArmState_(const ContainerAllocator& _alloc)
    : arm_power(false)  {
    }



   typedef uint8_t _arm_power_type;
  _arm_power_type arm_power;




  typedef boost::shared_ptr< ::p2os_msgs::ArmState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p2os_msgs::ArmState_<ContainerAllocator> const> ConstPtr;

}; // struct ArmState_

typedef ::p2os_msgs::ArmState_<std::allocator<void> > ArmState;

typedef boost::shared_ptr< ::p2os_msgs::ArmState > ArmStatePtr;
typedef boost::shared_ptr< ::p2os_msgs::ArmState const> ArmStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::p2os_msgs::ArmState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::p2os_msgs::ArmState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace p2os_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'p2os_msgs': ['/home/rsldemo/demobot/src/p2os/p2os_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::p2os_msgs::ArmState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::p2os_msgs::ArmState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p2os_msgs::ArmState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p2os_msgs::ArmState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p2os_msgs::ArmState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p2os_msgs::ArmState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::p2os_msgs::ArmState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f78f2c49a110ba43464d5c16d2a19027";
  }

  static const char* value(const ::p2os_msgs::ArmState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf78f2c49a110ba43ULL;
  static const uint64_t static_value2 = 0x464d5c16d2a19027ULL;
};

template<class ContainerAllocator>
struct DataType< ::p2os_msgs::ArmState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "p2os_msgs/ArmState";
  }

  static const char* value(const ::p2os_msgs::ArmState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::p2os_msgs::ArmState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool arm_power\n\
";
  }

  static const char* value(const ::p2os_msgs::ArmState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::p2os_msgs::ArmState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.arm_power);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ArmState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p2os_msgs::ArmState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::p2os_msgs::ArmState_<ContainerAllocator>& v)
  {
    s << indent << "arm_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.arm_power);
  }
};

} // namespace message_operations
} // namespace ros

#endif // P2OS_MSGS_MESSAGE_ARMSTATE_H