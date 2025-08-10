// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from opennav_coverage_msgs:action/ComputeCoveragePath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
#include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "opennav_coverage_msgs/action/detail/compute_coverage_path__functions.h"
#include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"


// Include directives for member types
// Member `gml_field`
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `polygons`
#include "opennav_coverage_msgs/msg/coordinates.h"
// Member `polygons`
#include "opennav_coverage_msgs/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"
// Member `headland_mode`
#include "opennav_coverage_msgs/msg/headland_mode.h"
// Member `headland_mode`
#include "opennav_coverage_msgs/msg/detail/headland_mode__rosidl_typesupport_introspection_c.h"
// Member `swath_mode`
#include "opennav_coverage_msgs/msg/swath_mode.h"
// Member `swath_mode`
#include "opennav_coverage_msgs/msg/detail/swath_mode__rosidl_typesupport_introspection_c.h"
// Member `row_swath_mode`
#include "opennav_coverage_msgs/msg/row_swath_mode.h"
// Member `row_swath_mode`
#include "opennav_coverage_msgs/msg/detail/row_swath_mode__rosidl_typesupport_introspection_c.h"
// Member `route_mode`
#include "opennav_coverage_msgs/msg/route_mode.h"
// Member `route_mode`
#include "opennav_coverage_msgs/msg/detail/route_mode__rosidl_typesupport_introspection_c.h"
// Member `path_mode`
#include "opennav_coverage_msgs/msg/path_mode.h"
// Member `path_mode`
#include "opennav_coverage_msgs/msg/detail/path_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__init(message_memory);
}

void opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_fini_function(void * message_memory)
{
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__fini(message_memory);
}

size_t opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__size_function__ComputeCoveragePath_Goal__polygons(
  const void * untyped_member)
{
  const opennav_coverage_msgs__msg__Coordinates__Sequence * member =
    (const opennav_coverage_msgs__msg__Coordinates__Sequence *)(untyped_member);
  return member->size;
}

const void * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputeCoveragePath_Goal__polygons(
  const void * untyped_member, size_t index)
{
  const opennav_coverage_msgs__msg__Coordinates__Sequence * member =
    (const opennav_coverage_msgs__msg__Coordinates__Sequence *)(untyped_member);
  return &member->data[index];
}

void * opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__get_function__ComputeCoveragePath_Goal__polygons(
  void * untyped_member, size_t index)
{
  opennav_coverage_msgs__msg__Coordinates__Sequence * member =
    (opennav_coverage_msgs__msg__Coordinates__Sequence *)(untyped_member);
  return &member->data[index];
}

void opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ComputeCoveragePath_Goal__polygons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const opennav_coverage_msgs__msg__Coordinates * item =
    ((const opennav_coverage_msgs__msg__Coordinates *)
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputeCoveragePath_Goal__polygons(untyped_member, index));
  opennav_coverage_msgs__msg__Coordinates * value =
    (opennav_coverage_msgs__msg__Coordinates *)(untyped_value);
  *value = *item;
}

void opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__assign_function__ComputeCoveragePath_Goal__polygons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  opennav_coverage_msgs__msg__Coordinates * item =
    ((opennav_coverage_msgs__msg__Coordinates *)
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__get_function__ComputeCoveragePath_Goal__polygons(untyped_member, index));
  const opennav_coverage_msgs__msg__Coordinates * value =
    (const opennav_coverage_msgs__msg__Coordinates *)(untyped_value);
  *item = *value;
}

bool opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__resize_function__ComputeCoveragePath_Goal__polygons(
  void * untyped_member, size_t size)
{
  opennav_coverage_msgs__msg__Coordinates__Sequence * member =
    (opennav_coverage_msgs__msg__Coordinates__Sequence *)(untyped_member);
  opennav_coverage_msgs__msg__Coordinates__Sequence__fini(member);
  return opennav_coverage_msgs__msg__Coordinates__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_member_array[12] = {
  {
    "generate_headland",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, generate_headland),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "generate_route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, generate_route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "generate_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, generate_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_gml_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, use_gml_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gml_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, gml_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, polygons),  // bytes offset in struct
    NULL,  // default value
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__size_function__ComputeCoveragePath_Goal__polygons,  // size() function pointer
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputeCoveragePath_Goal__polygons,  // get_const(index) function pointer
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__get_function__ComputeCoveragePath_Goal__polygons,  // get(index) function pointer
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ComputeCoveragePath_Goal__polygons,  // fetch(index, &value) function pointer
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__assign_function__ComputeCoveragePath_Goal__polygons,  // assign(index, value) function pointer
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__resize_function__ComputeCoveragePath_Goal__polygons  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "headland_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, headland_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "swath_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, swath_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row_swath_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, row_swath_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, route_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal, path_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_members = {
  "opennav_coverage_msgs__action",  // message namespace
  "ComputeCoveragePath_Goal",  // message name
  12,  // number of fields
  sizeof(opennav_coverage_msgs__action__ComputeCoveragePath_Goal),
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_member_array,  // message members
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_Goal)() {
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, msg, Coordinates)();
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, msg, HeadlandMode)();
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, msg, SwathMode)();
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, msg, RowSwathMode)();
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, msg, RouteMode)();
  opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, msg, PathMode)();
  if (!opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__action__ComputeCoveragePath_Goal__rosidl_typesupport_introspection_c__ComputeCoveragePath_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__functions.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"


// Include directives for member types
// Member `nav_path`
#include "nav_msgs/msg/path.h"
// Member `nav_path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `coverage_path`
#include "opennav_coverage_msgs/msg/path_components.h"
// Member `coverage_path`
#include "opennav_coverage_msgs/msg/detail/path_components__rosidl_typesupport_introspection_c.h"
// Member `planning_time`
#include "builtin_interfaces/msg/duration.h"
// Member `planning_time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__init(message_memory);
}

void opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_fini_function(void * message_memory)
{
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_member_array[4] = {
  {
    "nav_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Result, nav_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coverage_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Result, coverage_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Result, planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_members = {
  "opennav_coverage_msgs__action",  // message namespace
  "ComputeCoveragePath_Result",  // message name
  4,  // number of fields
  sizeof(opennav_coverage_msgs__action__ComputeCoveragePath_Result),
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_member_array,  // message members
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_Result)() {
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, msg, PathComponents)();
  opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__action__ComputeCoveragePath_Result__rosidl_typesupport_introspection_c__ComputeCoveragePath_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__functions.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__init(message_memory);
}

void opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_fini_function(void * message_memory)
{
  opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_message_members = {
  "opennav_coverage_msgs__action",  // message namespace
  "ComputeCoveragePath_Feedback",  // message name
  1,  // number of fields
  sizeof(opennav_coverage_msgs__action__ComputeCoveragePath_Feedback),
  opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_message_member_array,  // message members
  opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_Feedback)() {
  if (!opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__action__ComputeCoveragePath_Feedback__rosidl_typesupport_introspection_c__ComputeCoveragePath_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__functions.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "opennav_coverage_msgs/action/compute_coverage_path.h"
// Member `goal`
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__init(message_memory);
}

void opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_fini_function(void * message_memory)
{
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_members = {
  "opennav_coverage_msgs__action",  // message namespace
  "ComputeCoveragePath_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request),
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_member_array,  // message members
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_SendGoal_Request)() {
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_Goal)();
  if (!opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__functions.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__init(message_memory);
}

void opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_fini_function(void * message_memory)
{
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_members = {
  "opennav_coverage_msgs__action",  // message namespace
  "ComputeCoveragePath_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response),
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_member_array,  // message members
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_SendGoal_Response)() {
  opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__action__ComputeCoveragePath_SendGoal_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_service_members = {
  "opennav_coverage_msgs__action",  // service namespace
  "ComputeCoveragePath_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_service_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_SendGoal)() {
  if (!opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_service_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_SendGoal_Response)()->data;
  }

  return &opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__functions.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__init(message_memory);
}

void opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_fini_function(void * message_memory)
{
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_members = {
  "opennav_coverage_msgs__action",  // message namespace
  "ComputeCoveragePath_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request),
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_member_array,  // message members
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_GetResult_Request)() {
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Request__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__functions.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "opennav_coverage_msgs/action/compute_coverage_path.h"
// Member `result`
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__init(message_memory);
}

void opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_fini_function(void * message_memory)
{
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_members = {
  "opennav_coverage_msgs__action",  // message namespace
  "ComputeCoveragePath_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response),
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_member_array,  // message members
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_GetResult_Response)() {
  opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_Result)();
  if (!opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__action__ComputeCoveragePath_GetResult_Response__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_service_members = {
  "opennav_coverage_msgs__action",  // service namespace
  "ComputeCoveragePath_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_service_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_GetResult)() {
  if (!opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_service_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_GetResult_Response)()->data;
  }

  return &opennav_coverage_msgs__action__detail__compute_coverage_path__rosidl_typesupport_introspection_c__ComputeCoveragePath_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__functions.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "opennav_coverage_msgs/action/compute_coverage_path.h"
// Member `feedback`
// already included above
// #include "opennav_coverage_msgs/action/detail/compute_coverage_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__init(message_memory);
}

void opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_fini_function(void * message_memory)
{
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_members = {
  "opennav_coverage_msgs__action",  // message namespace
  "ComputeCoveragePath_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage),
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_member_array,  // message members
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_FeedbackMessage)() {
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, action, ComputeCoveragePath_Feedback)();
  if (!opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__action__ComputeCoveragePath_FeedbackMessage__rosidl_typesupport_introspection_c__ComputeCoveragePath_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
