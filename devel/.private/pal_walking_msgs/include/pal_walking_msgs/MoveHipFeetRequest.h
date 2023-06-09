// Generated by gencpp from file pal_walking_msgs/MoveHipFeetRequest.msg
// DO NOT EDIT!


#ifndef PAL_WALKING_MSGS_MESSAGE_MOVEHIPFEETREQUEST_H
#define PAL_WALKING_MSGS_MESSAGE_MOVEHIPFEETREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/PoseArray.h>

namespace pal_walking_msgs
{
template <class ContainerAllocator>
struct MoveHipFeetRequest_
{
  typedef MoveHipFeetRequest_<ContainerAllocator> Type;

  MoveHipFeetRequest_()
    : hip_poses()
    , left_foot_poses()
    , right_foot_poses()
    , times_after_previous()  {
    }
  MoveHipFeetRequest_(const ContainerAllocator& _alloc)
    : hip_poses(_alloc)
    , left_foot_poses(_alloc)
    , right_foot_poses(_alloc)
    , times_after_previous(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _hip_poses_type;
  _hip_poses_type hip_poses;

   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _left_foot_poses_type;
  _left_foot_poses_type left_foot_poses;

   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _right_foot_poses_type;
  _right_foot_poses_type right_foot_poses;

   typedef std::vector<ros::Duration, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros::Duration>> _times_after_previous_type;
  _times_after_previous_type times_after_previous;





  typedef boost::shared_ptr< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveHipFeetRequest_

typedef ::pal_walking_msgs::MoveHipFeetRequest_<std::allocator<void> > MoveHipFeetRequest;

typedef boost::shared_ptr< ::pal_walking_msgs::MoveHipFeetRequest > MoveHipFeetRequestPtr;
typedef boost::shared_ptr< ::pal_walking_msgs::MoveHipFeetRequest const> MoveHipFeetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator1> & lhs, const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator2> & rhs)
{
  return lhs.hip_poses == rhs.hip_poses &&
    lhs.left_foot_poses == rhs.left_foot_poses &&
    lhs.right_foot_poses == rhs.right_foot_poses &&
    lhs.times_after_previous == rhs.times_after_previous;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator1> & lhs, const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_walking_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ee43076f2da7aab2dbbf598a7709593";
  }

  static const char* value(const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ee43076f2da7aabULL;
  static const uint64_t static_value2 = 0x2dbbf598a7709593ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_walking_msgs/MoveHipFeetRequest";
  }

  static const char* value(const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service requests that the robot move the hip and feet in cartesian space\n"
"# The parameters are the waypoints and time to reach that poses\n"
"\n"
"geometry_msgs/PoseArray hip_poses\n"
"\n"
"geometry_msgs/PoseArray left_foot_poses\n"
"\n"
"geometry_msgs/PoseArray right_foot_poses\n"
"\n"
"duration[]              times_after_previous\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseArray\n"
"# An array of poses with a header for global reference.\n"
"\n"
"Header header\n"
"\n"
"Pose[] poses\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hip_poses);
      stream.next(m.left_foot_poses);
      stream.next(m.right_foot_poses);
      stream.next(m.times_after_previous);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveHipFeetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_walking_msgs::MoveHipFeetRequest_<ContainerAllocator>& v)
  {
    s << indent << "hip_poses: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.hip_poses);
    s << indent << "left_foot_poses: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.left_foot_poses);
    s << indent << "right_foot_poses: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.right_foot_poses);
    s << indent << "times_after_previous[]" << std::endl;
    for (size_t i = 0; i < v.times_after_previous.size(); ++i)
    {
      s << indent << "  times_after_previous[" << i << "]: ";
      Printer<ros::Duration>::stream(s, indent + "  ", v.times_after_previous[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_WALKING_MSGS_MESSAGE_MOVEHIPFEETREQUEST_H
