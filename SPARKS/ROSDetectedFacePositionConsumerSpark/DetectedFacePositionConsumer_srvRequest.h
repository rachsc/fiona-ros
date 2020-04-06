// Generated by gencpp from file fiona_pkg/DetectedFacePositionConsumer_srvRequest.msg
// DO NOT EDIT!


#ifndef FIONA_PKG_MESSAGE_DETECTEDFACEPOSITIONCONSUMER_SRVREQUEST_H
#define FIONA_PKG_MESSAGE_DETECTEDFACEPOSITIONCONSUMER_SRVREQUEST_H


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
struct DetectedFacePositionConsumer_srvRequest_
{
  typedef DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> Type;

  DetectedFacePositionConsumer_srvRequest_()
    : isFaceDetected(false)
    , x(0.0)
    , y(0.0)  {
    }
  DetectedFacePositionConsumer_srvRequest_(const ContainerAllocator& _alloc)
    : isFaceDetected(false)
    , x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _isFaceDetected_type;
  _isFaceDetected_type isFaceDetected;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedFacePositionConsumer_srvRequest_

typedef ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<std::allocator<void> > DetectedFacePositionConsumer_srvRequest;

typedef boost::shared_ptr< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest > DetectedFacePositionConsumer_srvRequestPtr;
typedef boost::shared_ptr< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest const> DetectedFacePositionConsumer_srvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c79f5c945f5f2e836d00a1638561c37c";
  }

  static const char* value(const ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc79f5c945f5f2e83ULL;
  static const uint64_t static_value2 = 0x6d00a1638561c37cULL;
};

template<class ContainerAllocator>
struct DataType< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fiona_pkg/DetectedFacePositionConsumer_srvRequest";
  }

  static const char* value(const ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool isFaceDetected\n"
"float64 x\n"
"float64 y\n"
;
  }

  static const char* value(const ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.isFaceDetected);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectedFacePositionConsumer_srvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fiona_pkg::DetectedFacePositionConsumer_srvRequest_<ContainerAllocator>& v)
  {
    s << indent << "isFaceDetected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isFaceDetected);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FIONA_PKG_MESSAGE_DETECTEDFACEPOSITIONCONSUMER_SRVREQUEST_H
