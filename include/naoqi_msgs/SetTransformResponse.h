// Generated by gencpp from file naoqi_msgs/SetTransformResponse.msg
// DO NOT EDIT!


#ifndef NAOQI_MSGS_MESSAGE_SETTRANSFORMRESPONSE_H
#define NAOQI_MSGS_MESSAGE_SETTRANSFORMRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace naoqi_msgs
{
template <class ContainerAllocator>
struct SetTransformResponse_
{
  typedef SetTransformResponse_<ContainerAllocator> Type;

  SetTransformResponse_()
    {
    }
  SetTransformResponse_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetTransformResponse_

typedef ::naoqi_msgs::SetTransformResponse_<std::allocator<void> > SetTransformResponse;

typedef boost::shared_ptr< ::naoqi_msgs::SetTransformResponse > SetTransformResponsePtr;
typedef boost::shared_ptr< ::naoqi_msgs::SetTransformResponse const> SetTransformResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'naoqi_msgs': ['/home/vrabaud/work/master/alrosconverter/msg/naoqi_msgs/msg', '/home/vrabaud/work/master/alrosconverter/msg/devel/share/naoqi_msgs/msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::naoqi_msgs::SetTransformResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_msgs/SetTransformResponse";
  }

  static const char* value(const ::naoqi_msgs::SetTransformResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::naoqi_msgs::SetTransformResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetTransformResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_msgs::SetTransformResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::naoqi_msgs::SetTransformResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_MSGS_MESSAGE_SETTRANSFORMRESPONSE_H
