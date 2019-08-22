// Generated by gencpp from file tf2_web_republisher/RepublishTFsResponse.msg
// DO NOT EDIT!


#ifndef TF2_WEB_REPUBLISHER_MESSAGE_REPUBLISHTFSRESPONSE_H
#define TF2_WEB_REPUBLISHER_MESSAGE_REPUBLISHTFSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tf2_web_republisher
{
template <class ContainerAllocator>
struct RepublishTFsResponse_
{
  typedef RepublishTFsResponse_<ContainerAllocator> Type;

  RepublishTFsResponse_()
    : topic_name()  {
    }
  RepublishTFsResponse_(const ContainerAllocator& _alloc)
    : topic_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_name_type;
  _topic_name_type topic_name;





  typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RepublishTFsResponse_

typedef ::tf2_web_republisher::RepublishTFsResponse_<std::allocator<void> > RepublishTFsResponse;

typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsResponse > RepublishTFsResponsePtr;
typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsResponse const> RepublishTFsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf2_web_republisher

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'tf2_web_republisher': ['/home/vashmata/Programming/git/robotics-prototype/robot/rospackages/devel/share/tf2_web_republisher/msg', '/home/vashmata/Programming/git/robotics-prototype/robot/rospackages/src/tf2_web_republisher/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b38cc2f19f45368c2db7867751ce95a9";
  }

  static const char* value(const ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb38cc2f19f45368cULL;
  static const uint64_t static_value2 = 0x2db7867751ce95a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf2_web_republisher/RepublishTFsResponse";
  }

  static const char* value(const ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string topic_name\n\
";
  }

  static const char* value(const ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RepublishTFsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator>& v)
  {
    s << indent << "topic_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TF2_WEB_REPUBLISHER_MESSAGE_REPUBLISHTFSRESPONSE_H
