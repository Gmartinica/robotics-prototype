// Generated by gencpp from file arm_control/ArmRequest.msg
// DO NOT EDIT!


#ifndef ARM_CONTROL_MESSAGE_ARMREQUEST_H
#define ARM_CONTROL_MESSAGE_ARMREQUEST_H

#include <ros/service_traits.h>


#include <arm_control/ArmRequestRequest.h>
#include <arm_control/ArmRequestResponse.h>


namespace arm_control
{

struct ArmRequest
{

typedef ArmRequestRequest Request;
typedef ArmRequestResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ArmRequest
} // namespace arm_control


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::arm_control::ArmRequest > {
  static const char* value()
  {
    return "694b24ecd6b00b470b19b9b137151d30";
  }

  static const char* value(const ::arm_control::ArmRequest&) { return value(); }
};

template<>
struct DataType< ::arm_control::ArmRequest > {
  static const char* value()
  {
    return "arm_control/ArmRequest";
  }

  static const char* value(const ::arm_control::ArmRequest&) { return value(); }
};


// service_traits::MD5Sum< ::arm_control::ArmRequestRequest> should match 
// service_traits::MD5Sum< ::arm_control::ArmRequest > 
template<>
struct MD5Sum< ::arm_control::ArmRequestRequest>
{
  static const char* value()
  {
    return MD5Sum< ::arm_control::ArmRequest >::value();
  }
  static const char* value(const ::arm_control::ArmRequestRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::arm_control::ArmRequestRequest> should match 
// service_traits::DataType< ::arm_control::ArmRequest > 
template<>
struct DataType< ::arm_control::ArmRequestRequest>
{
  static const char* value()
  {
    return DataType< ::arm_control::ArmRequest >::value();
  }
  static const char* value(const ::arm_control::ArmRequestRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::arm_control::ArmRequestResponse> should match 
// service_traits::MD5Sum< ::arm_control::ArmRequest > 
template<>
struct MD5Sum< ::arm_control::ArmRequestResponse>
{
  static const char* value()
  {
    return MD5Sum< ::arm_control::ArmRequest >::value();
  }
  static const char* value(const ::arm_control::ArmRequestResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::arm_control::ArmRequestResponse> should match 
// service_traits::DataType< ::arm_control::ArmRequest > 
template<>
struct DataType< ::arm_control::ArmRequestResponse>
{
  static const char* value()
  {
    return DataType< ::arm_control::ArmRequest >::value();
  }
  static const char* value(const ::arm_control::ArmRequestResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ARM_CONTROL_MESSAGE_ARMREQUEST_H
