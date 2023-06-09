// Generated by gencpp from file pal_navigation_msgs/RegisterSync.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_REGISTERSYNC_H
#define PAL_NAVIGATION_MSGS_MESSAGE_REGISTERSYNC_H

#include <ros/service_traits.h>


#include <pal_navigation_msgs/RegisterSyncRequest.h>
#include <pal_navigation_msgs/RegisterSyncResponse.h>


namespace pal_navigation_msgs
{

struct RegisterSync
{

typedef RegisterSyncRequest Request;
typedef RegisterSyncResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RegisterSync
} // namespace pal_navigation_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pal_navigation_msgs::RegisterSync > {
  static const char* value()
  {
    return "84614d0763a40fe03069b1796a2a995c";
  }

  static const char* value(const ::pal_navigation_msgs::RegisterSync&) { return value(); }
};

template<>
struct DataType< ::pal_navigation_msgs::RegisterSync > {
  static const char* value()
  {
    return "pal_navigation_msgs/RegisterSync";
  }

  static const char* value(const ::pal_navigation_msgs::RegisterSync&) { return value(); }
};


// service_traits::MD5Sum< ::pal_navigation_msgs::RegisterSyncRequest> should match
// service_traits::MD5Sum< ::pal_navigation_msgs::RegisterSync >
template<>
struct MD5Sum< ::pal_navigation_msgs::RegisterSyncRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pal_navigation_msgs::RegisterSync >::value();
  }
  static const char* value(const ::pal_navigation_msgs::RegisterSyncRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pal_navigation_msgs::RegisterSyncRequest> should match
// service_traits::DataType< ::pal_navigation_msgs::RegisterSync >
template<>
struct DataType< ::pal_navigation_msgs::RegisterSyncRequest>
{
  static const char* value()
  {
    return DataType< ::pal_navigation_msgs::RegisterSync >::value();
  }
  static const char* value(const ::pal_navigation_msgs::RegisterSyncRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pal_navigation_msgs::RegisterSyncResponse> should match
// service_traits::MD5Sum< ::pal_navigation_msgs::RegisterSync >
template<>
struct MD5Sum< ::pal_navigation_msgs::RegisterSyncResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pal_navigation_msgs::RegisterSync >::value();
  }
  static const char* value(const ::pal_navigation_msgs::RegisterSyncResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pal_navigation_msgs::RegisterSyncResponse> should match
// service_traits::DataType< ::pal_navigation_msgs::RegisterSync >
template<>
struct DataType< ::pal_navigation_msgs::RegisterSyncResponse>
{
  static const char* value()
  {
    return DataType< ::pal_navigation_msgs::RegisterSync >::value();
  }
  static const char* value(const ::pal_navigation_msgs::RegisterSyncResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_REGISTERSYNC_H
