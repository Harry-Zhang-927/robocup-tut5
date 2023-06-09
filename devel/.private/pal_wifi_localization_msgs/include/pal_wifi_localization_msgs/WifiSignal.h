// Generated by gencpp from file pal_wifi_localization_msgs/WifiSignal.msg
// DO NOT EDIT!


#ifndef PAL_WIFI_LOCALIZATION_MSGS_MESSAGE_WIFISIGNAL_H
#define PAL_WIFI_LOCALIZATION_MSGS_MESSAGE_WIFISIGNAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace pal_wifi_localization_msgs
{
template <class ContainerAllocator>
struct WifiSignal_
{
  typedef WifiSignal_<ContainerAllocator> Type;

  WifiSignal_()
    : id()
    , mean(0.0)
    , std_dev(0.0)  {
    }
  WifiSignal_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , mean(0.0)
    , std_dev(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _id_type;
  _id_type id;

   typedef float _mean_type;
  _mean_type mean;

   typedef float _std_dev_type;
  _std_dev_type std_dev;





  typedef boost::shared_ptr< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> const> ConstPtr;

}; // struct WifiSignal_

typedef ::pal_wifi_localization_msgs::WifiSignal_<std::allocator<void> > WifiSignal;

typedef boost::shared_ptr< ::pal_wifi_localization_msgs::WifiSignal > WifiSignalPtr;
typedef boost::shared_ptr< ::pal_wifi_localization_msgs::WifiSignal const> WifiSignalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator1> & lhs, const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.mean == rhs.mean &&
    lhs.std_dev == rhs.std_dev;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator1> & lhs, const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_wifi_localization_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d6a79c360f114b44aaa8b522b2621591";
  }

  static const char* value(const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd6a79c360f114b44ULL;
  static const uint64_t static_value2 = 0xaaa8b522b2621591ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_wifi_localization_msgs/WifiSignal";
  }

  static const char* value(const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Contains data relative to the learnt model of a wifi signal strenght in a specific location\n"
"\n"
"# network id\n"
"std_msgs/String id\n"
"\n"
"#Signal is represented through  a gaussian pdf.\n"
"#The signal strenght is measured in dB\n"
"\n"
"float32  mean\n"
"float32  std_dev\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.mean);
      stream.next(m.std_dev);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WifiSignal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_wifi_localization_msgs::WifiSignal_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.id);
    s << indent << "mean: ";
    Printer<float>::stream(s, indent + "  ", v.mean);
    s << indent << "std_dev: ";
    Printer<float>::stream(s, indent + "  ", v.std_dev);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_WIFI_LOCALIZATION_MSGS_MESSAGE_WIFISIGNAL_H
