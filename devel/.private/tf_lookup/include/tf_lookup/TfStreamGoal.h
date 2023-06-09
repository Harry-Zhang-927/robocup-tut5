// Generated by gencpp from file tf_lookup/TfStreamGoal.msg
// DO NOT EDIT!


#ifndef TF_LOOKUP_MESSAGE_TFSTREAMGOAL_H
#define TF_LOOKUP_MESSAGE_TFSTREAMGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <tf_lookup/Subscription.h>

namespace tf_lookup
{
template <class ContainerAllocator>
struct TfStreamGoal_
{
  typedef TfStreamGoal_<ContainerAllocator> Type;

  TfStreamGoal_()
    : transforms()
    , subscription_id()
    , update(false)  {
    }
  TfStreamGoal_(const ContainerAllocator& _alloc)
    : transforms(_alloc)
    , subscription_id(_alloc)
    , update(false)  {
  (void)_alloc;
    }



   typedef std::vector< ::tf_lookup::Subscription_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::tf_lookup::Subscription_<ContainerAllocator> >> _transforms_type;
  _transforms_type transforms;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _subscription_id_type;
  _subscription_id_type subscription_id;

   typedef uint8_t _update_type;
  _update_type update;





  typedef boost::shared_ptr< ::tf_lookup::TfStreamGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf_lookup::TfStreamGoal_<ContainerAllocator> const> ConstPtr;

}; // struct TfStreamGoal_

typedef ::tf_lookup::TfStreamGoal_<std::allocator<void> > TfStreamGoal;

typedef boost::shared_ptr< ::tf_lookup::TfStreamGoal > TfStreamGoalPtr;
typedef boost::shared_ptr< ::tf_lookup::TfStreamGoal const> TfStreamGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf_lookup::TfStreamGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tf_lookup::TfStreamGoal_<ContainerAllocator1> & lhs, const ::tf_lookup::TfStreamGoal_<ContainerAllocator2> & rhs)
{
  return lhs.transforms == rhs.transforms &&
    lhs.subscription_id == rhs.subscription_id &&
    lhs.update == rhs.update;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tf_lookup::TfStreamGoal_<ContainerAllocator1> & lhs, const ::tf_lookup::TfStreamGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tf_lookup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf_lookup::TfStreamGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf_lookup::TfStreamGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_lookup::TfStreamGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e00b5ec9adf5765d948ec802ab721a4a";
  }

  static const char* value(const ::tf_lookup::TfStreamGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe00b5ec9adf5765dULL;
  static const uint64_t static_value2 = 0x948ec802ab721a4aULL;
};

template<class ContainerAllocator>
struct DataType< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf_lookup/TfStreamGoal";
  }

  static const char* value(const ::tf_lookup::TfStreamGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"Subscription[] transforms\n"
"string subscription_id\n"
"bool update\n"
"\n"
"================================================================================\n"
"MSG: tf_lookup/Subscription\n"
"string target\n"
"string source\n"
;
  }

  static const char* value(const ::tf_lookup::TfStreamGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transforms);
      stream.next(m.subscription_id);
      stream.next(m.update);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TfStreamGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf_lookup::TfStreamGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tf_lookup::TfStreamGoal_<ContainerAllocator>& v)
  {
    s << indent << "transforms[]" << std::endl;
    for (size_t i = 0; i < v.transforms.size(); ++i)
    {
      s << indent << "  transforms[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tf_lookup::Subscription_<ContainerAllocator> >::stream(s, indent + "    ", v.transforms[i]);
    }
    s << indent << "subscription_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.subscription_id);
    s << indent << "update: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.update);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TF_LOOKUP_MESSAGE_TFSTREAMGOAL_H
