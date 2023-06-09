// Generated by gencpp from file tiago_pick_demo/PickUpPoseResult.msg
// DO NOT EDIT!


#ifndef TIAGO_PICK_DEMO_MESSAGE_PICKUPPOSERESULT_H
#define TIAGO_PICK_DEMO_MESSAGE_PICKUPPOSERESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tiago_pick_demo
{
template <class ContainerAllocator>
struct PickUpPoseResult_
{
  typedef PickUpPoseResult_<ContainerAllocator> Type;

  PickUpPoseResult_()
    : error_code(0)  {
    }
  PickUpPoseResult_(const ContainerAllocator& _alloc)
    : error_code(0)  {
  (void)_alloc;
    }



   typedef int32_t _error_code_type;
  _error_code_type error_code;





  typedef boost::shared_ptr< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> const> ConstPtr;

}; // struct PickUpPoseResult_

typedef ::tiago_pick_demo::PickUpPoseResult_<std::allocator<void> > PickUpPoseResult;

typedef boost::shared_ptr< ::tiago_pick_demo::PickUpPoseResult > PickUpPoseResultPtr;
typedef boost::shared_ptr< ::tiago_pick_demo::PickUpPoseResult const> PickUpPoseResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator1> & lhs, const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator2> & rhs)
{
  return lhs.error_code == rhs.error_code;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator1> & lhs, const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tiago_pick_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea324a22c787839f822b9a025bc2c6fe";
  }

  static const char* value(const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea324a22c787839fULL;
  static const uint64_t static_value2 = 0x822b9a025bc2c6feULL;
};

template<class ContainerAllocator>
struct DataType< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tiago_pick_demo/PickUpPoseResult";
  }

  static const char* value(const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"# Comes from moveit_msgs/MoveItErrorCodes\n"
"int32 error_code\n"
;
  }

  static const char* value(const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickUpPoseResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tiago_pick_demo::PickUpPoseResult_<ContainerAllocator>& v)
  {
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TIAGO_PICK_DEMO_MESSAGE_PICKUPPOSERESULT_H
