// Generated by gencpp from file quad_controller/SetFloatResponse.msg
// DO NOT EDIT!


#ifndef QUAD_CONTROLLER_MESSAGE_SETFLOATRESPONSE_H
#define QUAD_CONTROLLER_MESSAGE_SETFLOATRESPONSE_H


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
struct SetFloatResponse_
{
  typedef SetFloatResponse_<ContainerAllocator> Type;

  SetFloatResponse_()
    : success(false)
    , newData(0.0)  {
    }
  SetFloatResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , newData(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef float _newData_type;
  _newData_type newData;




  typedef boost::shared_ptr< ::quad_controller::SetFloatResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quad_controller::SetFloatResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetFloatResponse_

typedef ::quad_controller::SetFloatResponse_<std::allocator<void> > SetFloatResponse;

typedef boost::shared_ptr< ::quad_controller::SetFloatResponse > SetFloatResponsePtr;
typedef boost::shared_ptr< ::quad_controller::SetFloatResponse const> SetFloatResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quad_controller::SetFloatResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quad_controller::SetFloatResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::quad_controller::SetFloatResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quad_controller::SetFloatResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quad_controller::SetFloatResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quad_controller::SetFloatResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quad_controller::SetFloatResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quad_controller::SetFloatResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quad_controller::SetFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93025a54ac8a01801326d7285fa0b92c";
  }

  static const char* value(const ::quad_controller::SetFloatResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93025a54ac8a0180ULL;
  static const uint64_t static_value2 = 0x1326d7285fa0b92cULL;
};

template<class ContainerAllocator>
struct DataType< ::quad_controller::SetFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quad_controller/SetFloatResponse";
  }

  static const char* value(const ::quad_controller::SetFloatResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quad_controller::SetFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
float32 newData\n\
";
  }

  static const char* value(const ::quad_controller::SetFloatResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quad_controller::SetFloatResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.newData);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetFloatResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quad_controller::SetFloatResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quad_controller::SetFloatResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "newData: ";
    Printer<float>::stream(s, indent + "  ", v.newData);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUAD_CONTROLLER_MESSAGE_SETFLOATRESPONSE_H
