// Generated by gencpp from file pal_detection_msgs/StartEnrollmentResponse.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_STARTENROLLMENTRESPONSE_H
#define PAL_DETECTION_MSGS_MESSAGE_STARTENROLLMENTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct StartEnrollmentResponse_
{
  typedef StartEnrollmentResponse_<ContainerAllocator> Type;

  StartEnrollmentResponse_()
    : result(false)  {
    }
  StartEnrollmentResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StartEnrollmentResponse_

typedef ::pal_detection_msgs::StartEnrollmentResponse_<std::allocator<void> > StartEnrollmentResponse;

typedef boost::shared_ptr< ::pal_detection_msgs::StartEnrollmentResponse > StartEnrollmentResponsePtr;
typedef boost::shared_ptr< ::pal_detection_msgs::StartEnrollmentResponse const> StartEnrollmentResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/StartEnrollmentResponse";
  }

  static const char* value(const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
"\n"
;
  }

  static const char* value(const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StartEnrollmentResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_detection_msgs::StartEnrollmentResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_STARTENROLLMENTRESPONSE_H
