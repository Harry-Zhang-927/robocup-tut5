// Generated by gencpp from file dynamic_introspection/IntrospectionMsg.msg
// DO NOT EDIT!


#ifndef DYNAMIC_INTROSPECTION_MESSAGE_INTROSPECTIONMSG_H
#define DYNAMIC_INTROSPECTION_MESSAGE_INTROSPECTIONMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <dynamic_introspection/BoolParameter.h>
#include <dynamic_introspection/DoubleParameter.h>
#include <dynamic_introspection/IntParameter.h>
#include <dynamic_introspection/MarkerParameter.h>

namespace dynamic_introspection
{
template <class ContainerAllocator>
struct IntrospectionMsg_
{
  typedef IntrospectionMsg_<ContainerAllocator> Type;

  IntrospectionMsg_()
    : header()
    , bools()
    , doubles()
    , ints()
    , markers()  {
    }
  IntrospectionMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bools(_alloc)
    , doubles(_alloc)
    , ints(_alloc)
    , markers(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::dynamic_introspection::BoolParameter_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >> _bools_type;
  _bools_type bools;

   typedef std::vector< ::dynamic_introspection::DoubleParameter_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::dynamic_introspection::DoubleParameter_<ContainerAllocator> >> _doubles_type;
  _doubles_type doubles;

   typedef std::vector< ::dynamic_introspection::IntParameter_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::dynamic_introspection::IntParameter_<ContainerAllocator> >> _ints_type;
  _ints_type ints;

   typedef std::vector< ::dynamic_introspection::MarkerParameter_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::dynamic_introspection::MarkerParameter_<ContainerAllocator> >> _markers_type;
  _markers_type markers;





  typedef boost::shared_ptr< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> const> ConstPtr;

}; // struct IntrospectionMsg_

typedef ::dynamic_introspection::IntrospectionMsg_<std::allocator<void> > IntrospectionMsg;

typedef boost::shared_ptr< ::dynamic_introspection::IntrospectionMsg > IntrospectionMsgPtr;
typedef boost::shared_ptr< ::dynamic_introspection::IntrospectionMsg const> IntrospectionMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator1> & lhs, const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.bools == rhs.bools &&
    lhs.doubles == rhs.doubles &&
    lhs.ints == rhs.ints &&
    lhs.markers == rhs.markers;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator1> & lhs, const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamic_introspection

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abf14c63c888d80e823c2b0710f2d3a3";
  }

  static const char* value(const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xabf14c63c888d80eULL;
  static const uint64_t static_value2 = 0x823c2b0710f2d3a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamic_introspection/IntrospectionMsg";
  }

  static const char* value(const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"BoolParameter[] bools\n"
"DoubleParameter[] doubles\n"
"IntParameter[] ints\n"
"\n"
"MarkerParameter[] markers\n"
"\n"
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
"MSG: dynamic_introspection/BoolParameter\n"
"string name\n"
"bool value\n"
"\n"
"================================================================================\n"
"MSG: dynamic_introspection/DoubleParameter\n"
"string name\n"
"float64 value\n"
"\n"
"================================================================================\n"
"MSG: dynamic_introspection/IntParameter\n"
"string name\n"
"int32 value\n"
"\n"
"================================================================================\n"
"MSG: dynamic_introspection/MarkerParameter\n"
"string name\n"
"visualization_msgs/MarkerArray value\n"
"\n"
"================================================================================\n"
"MSG: visualization_msgs/MarkerArray\n"
"Marker[] markers\n"
"\n"
"================================================================================\n"
"MSG: visualization_msgs/Marker\n"
"# See http://www.ros.org/wiki/rviz/DisplayTypes/Marker and http://www.ros.org/wiki/rviz/Tutorials/Markers%3A%20Basic%20Shapes for more information on using this message with rviz\n"
"\n"
"uint8 ARROW=0\n"
"uint8 CUBE=1\n"
"uint8 SPHERE=2\n"
"uint8 CYLINDER=3\n"
"uint8 LINE_STRIP=4\n"
"uint8 LINE_LIST=5\n"
"uint8 CUBE_LIST=6\n"
"uint8 SPHERE_LIST=7\n"
"uint8 POINTS=8\n"
"uint8 TEXT_VIEW_FACING=9\n"
"uint8 MESH_RESOURCE=10\n"
"uint8 TRIANGLE_LIST=11\n"
"\n"
"uint8 ADD=0\n"
"uint8 MODIFY=0\n"
"uint8 DELETE=2\n"
"uint8 DELETEALL=3\n"
"\n"
"Header header                        # header for time/frame information\n"
"string ns                            # Namespace to place this object in... used in conjunction with id to create a unique name for the object\n"
"int32 id 		                         # object ID useful in conjunction with the namespace for manipulating and deleting the object later\n"
"int32 type 		                       # Type of object\n"
"int32 action 	                       # 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects\n"
"geometry_msgs/Pose pose                 # Pose of the object\n"
"geometry_msgs/Vector3 scale             # Scale of the object 1,1,1 means default (usually 1 meter square)\n"
"std_msgs/ColorRGBA color             # Color [0.0-1.0]\n"
"duration lifetime                    # How long the object should last before being automatically deleted.  0 means forever\n"
"bool frame_locked                    # If this marker should be frame-locked, i.e. retransformed into its frame every timestep\n"
"\n"
"#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\n"
"geometry_msgs/Point[] points\n"
"#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\n"
"#number of colors must either be 0 or equal to the number of points\n"
"#NOTE: alpha is not yet used\n"
"std_msgs/ColorRGBA[] colors\n"
"\n"
"# NOTE: only used for text markers\n"
"string text\n"
"\n"
"# NOTE: only used for MESH_RESOURCE markers\n"
"string mesh_resource\n"
"bool mesh_use_embedded_materials\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bools);
      stream.next(m.doubles);
      stream.next(m.ints);
      stream.next(m.markers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IntrospectionMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamic_introspection::IntrospectionMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bools[]" << std::endl;
    for (size_t i = 0; i < v.bools.size(); ++i)
    {
      s << indent << "  bools[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.bools[i]);
    }
    s << indent << "doubles[]" << std::endl;
    for (size_t i = 0; i < v.doubles.size(); ++i)
    {
      s << indent << "  doubles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_introspection::DoubleParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.doubles[i]);
    }
    s << indent << "ints[]" << std::endl;
    for (size_t i = 0; i < v.ints.size(); ++i)
    {
      s << indent << "  ints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_introspection::IntParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.ints[i]);
    }
    s << indent << "markers[]" << std::endl;
    for (size_t i = 0; i < v.markers.size(); ++i)
    {
      s << indent << "  markers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_introspection::MarkerParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.markers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_INTROSPECTION_MESSAGE_INTROSPECTIONMSG_H
