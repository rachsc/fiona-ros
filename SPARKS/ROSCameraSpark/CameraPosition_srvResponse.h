// Generated by gencpp from file fiona_pkg/CameraPosition_srvResponse.msg
// DO NOT EDIT!


#ifndef FIONA_PKG_MESSAGE_CAMERAPOSITION_SRVRESPONSE_H
#define FIONA_PKG_MESSAGE_CAMERAPOSITION_SRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fiona_pkg
{
template <class ContainerAllocator>
struct CameraPosition_srvResponse_
{
  typedef CameraPosition_srvResponse_<ContainerAllocator> Type;

  CameraPosition_srvResponse_()
    : camera_position(false)  {
    }
  CameraPosition_srvResponse_(const ContainerAllocator& _alloc)
    : camera_position(false)  {
  (void)_alloc;
    }



   typedef uint8_t _camera_position_type;
  _camera_position_type camera_position;





  typedef boost::shared_ptr< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CameraPosition_srvResponse_

typedef ::fiona_pkg::CameraPosition_srvResponse_<std::allocator<void> > CameraPosition_srvResponse;

typedef boost::shared_ptr< ::fiona_pkg::CameraPosition_srvResponse > CameraPosition_srvResponsePtr;
typedef boost::shared_ptr< ::fiona_pkg::CameraPosition_srvResponse const> CameraPosition_srvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fiona_pkg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'fiona_pkg': ['/home/blade/catkin_ws/src/fiona_pkg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5ac3faefcfcb49a658be6267864651a";
  }

  static const char* value(const ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5ac3faefcfcb49aULL;
  static const uint64_t static_value2 = 0x658be6267864651aULL;
};

template<class ContainerAllocator>
struct DataType< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fiona_pkg/CameraPosition_srvResponse";
  }

  static const char* value(const ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool camera_position\n"
"\n"
;
  }

  static const char* value(const ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.camera_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraPosition_srvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fiona_pkg::CameraPosition_srvResponse_<ContainerAllocator>& v)
  {
    s << indent << "camera_position: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.camera_position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FIONA_PKG_MESSAGE_CAMERAPOSITION_SRVRESPONSE_H
