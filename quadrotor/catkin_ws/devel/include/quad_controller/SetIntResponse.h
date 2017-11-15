// Generated by gencpp from file quad_controller/SetIntResponse.msg
// DO NOT EDIT!


#ifndef QUAD_CONTROLLER_MESSAGE_SETINTRESPONSE_H
#define QUAD_CONTROLLER_MESSAGE_SETINTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace quad_controller
{
template <class ContainerAllocator>
struct SetIntResponse_
{
  typedef SetIntResponse_<ContainerAllocator> Type;

  SetIntResponse_()
    : success(false)
    , newData(0)  {
    }
  SetIntResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , newData(0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef int32_t _newData_type;
  _newData_type newData;




  typedef boost::shared_ptr< ::quad_controller::SetIntResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quad_controller::SetIntResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetIntResponse_

typedef ::quad_controller::SetIntResponse_<std::allocator<void> > SetIntResponse;

typedef boost::shared_ptr< ::quad_controller::SetIntResponse > SetIntResponsePtr;
typedef boost::shared_ptr< ::quad_controller::SetIntResponse const> SetIntResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quad_controller::SetIntResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quad_controller::SetIntResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace quad_controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'quad_controller': ['/home/robond/Robotics_Udacity_NanoDegree/quadrotor/catkin_ws/src/RoboND-Controls-Lab/quad_controller/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::quad_controller::SetIntResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quad_controller::SetIntResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quad_controller::SetIntResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quad_controller::SetIntResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quad_controller::SetIntResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quad_controller::SetIntResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quad_controller::SetIntResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2a5eb360a06563913251f51da65a2f34";
  }

  static const char* value(const ::quad_controller::SetIntResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2a5eb360a0656391ULL;
  static const uint64_t static_value2 = 0x3251f51da65a2f34ULL;
};

template<class ContainerAllocator>
struct DataType< ::quad_controller::SetIntResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quad_controller/SetIntResponse";
  }

  static const char* value(const ::quad_controller::SetIntResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quad_controller::SetIntResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
int32 newData\n\
";
  }

  static const char* value(const ::quad_controller::SetIntResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quad_controller::SetIntResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.newData);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetIntResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quad_controller::SetIntResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quad_controller::SetIntResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "newData: ";
    Printer<int32_t>::stream(s, indent + "  ", v.newData);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUAD_CONTROLLER_MESSAGE_SETINTRESPONSE_H
