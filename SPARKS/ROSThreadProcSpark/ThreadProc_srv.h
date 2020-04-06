// Generated by gencpp from file fiona_pkg/ThreadProc_srv.msg
// DO NOT EDIT!


#ifndef FIONA_PKG_MESSAGE_THREADPROC_SRV_H
#define FIONA_PKG_MESSAGE_THREADPROC_SRV_H

#include <ros/service_traits.h>


#include "ThreadProc_srvRequest.h"
#include "ThreadProc_srvResponse.h"


namespace fiona_pkg
{

struct ThreadProc_srv
{

typedef ThreadProc_srvRequest Request;
typedef ThreadProc_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ThreadProc_srv
} // namespace fiona_pkg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::fiona_pkg::ThreadProc_srv > {
  static const char* value()
  {
    return "86d24b0b94314ab678b7e18aa29b7518";
  }

  static const char* value(const ::fiona_pkg::ThreadProc_srv&) { return value(); }
};

template<>
struct DataType< ::fiona_pkg::ThreadProc_srv > {
  static const char* value()
  {
    return "fiona_pkg/ThreadProc_srv";
  }

  static const char* value(const ::fiona_pkg::ThreadProc_srv&) { return value(); }
};


// service_traits::MD5Sum< ::fiona_pkg::ThreadProc_srvRequest> should match 
// service_traits::MD5Sum< ::fiona_pkg::ThreadProc_srv > 
template<>
struct MD5Sum< ::fiona_pkg::ThreadProc_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::fiona_pkg::ThreadProc_srv >::value();
  }
  static const char* value(const ::fiona_pkg::ThreadProc_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::fiona_pkg::ThreadProc_srvRequest> should match 
// service_traits::DataType< ::fiona_pkg::ThreadProc_srv > 
template<>
struct DataType< ::fiona_pkg::ThreadProc_srvRequest>
{
  static const char* value()
  {
    return DataType< ::fiona_pkg::ThreadProc_srv >::value();
  }
  static const char* value(const ::fiona_pkg::ThreadProc_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::fiona_pkg::ThreadProc_srvResponse> should match 
// service_traits::MD5Sum< ::fiona_pkg::ThreadProc_srv > 
template<>
struct MD5Sum< ::fiona_pkg::ThreadProc_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::fiona_pkg::ThreadProc_srv >::value();
  }
  static const char* value(const ::fiona_pkg::ThreadProc_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::fiona_pkg::ThreadProc_srvResponse> should match 
// service_traits::DataType< ::fiona_pkg::ThreadProc_srv > 
template<>
struct DataType< ::fiona_pkg::ThreadProc_srvResponse>
{
  static const char* value()
  {
    return DataType< ::fiona_pkg::ThreadProc_srv >::value();
  }
  static const char* value(const ::fiona_pkg::ThreadProc_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // FIONA_PKG_MESSAGE_THREADPROC_SRV_H
