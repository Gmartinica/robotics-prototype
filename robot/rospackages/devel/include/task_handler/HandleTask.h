// Generated by gencpp from file task_handler/HandleTask.msg
// DO NOT EDIT!


#ifndef TASK_HANDLER_MESSAGE_HANDLETASK_H
#define TASK_HANDLER_MESSAGE_HANDLETASK_H

#include <ros/service_traits.h>


#include <task_handler/HandleTaskRequest.h>
#include <task_handler/HandleTaskResponse.h>


namespace task_handler
{

struct HandleTask
{

typedef HandleTaskRequest Request;
typedef HandleTaskResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct HandleTask
} // namespace task_handler


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::task_handler::HandleTask > {
  static const char* value()
  {
    return "300264c411f28987cadaa5540174e12c";
  }

  static const char* value(const ::task_handler::HandleTask&) { return value(); }
};

template<>
struct DataType< ::task_handler::HandleTask > {
  static const char* value()
  {
    return "task_handler/HandleTask";
  }

  static const char* value(const ::task_handler::HandleTask&) { return value(); }
};


// service_traits::MD5Sum< ::task_handler::HandleTaskRequest> should match 
// service_traits::MD5Sum< ::task_handler::HandleTask > 
template<>
struct MD5Sum< ::task_handler::HandleTaskRequest>
{
  static const char* value()
  {
    return MD5Sum< ::task_handler::HandleTask >::value();
  }
  static const char* value(const ::task_handler::HandleTaskRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::task_handler::HandleTaskRequest> should match 
// service_traits::DataType< ::task_handler::HandleTask > 
template<>
struct DataType< ::task_handler::HandleTaskRequest>
{
  static const char* value()
  {
    return DataType< ::task_handler::HandleTask >::value();
  }
  static const char* value(const ::task_handler::HandleTaskRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::task_handler::HandleTaskResponse> should match 
// service_traits::MD5Sum< ::task_handler::HandleTask > 
template<>
struct MD5Sum< ::task_handler::HandleTaskResponse>
{
  static const char* value()
  {
    return MD5Sum< ::task_handler::HandleTask >::value();
  }
  static const char* value(const ::task_handler::HandleTaskResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::task_handler::HandleTaskResponse> should match 
// service_traits::DataType< ::task_handler::HandleTask > 
template<>
struct DataType< ::task_handler::HandleTaskResponse>
{
  static const char* value()
  {
    return DataType< ::task_handler::HandleTask >::value();
  }
  static const char* value(const ::task_handler::HandleTaskResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TASK_HANDLER_MESSAGE_HANDLETASK_H
