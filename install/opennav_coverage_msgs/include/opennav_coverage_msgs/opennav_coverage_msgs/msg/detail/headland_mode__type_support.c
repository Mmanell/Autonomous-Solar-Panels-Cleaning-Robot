// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from opennav_coverage_msgs:msg/HeadlandMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "opennav_coverage_msgs/msg/detail/headland_mode__rosidl_typesupport_introspection_c.h"
#include "opennav_coverage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "opennav_coverage_msgs/msg/detail/headland_mode__functions.h"
#include "opennav_coverage_msgs/msg/detail/headland_mode__struct.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opennav_coverage_msgs__msg__HeadlandMode__init(message_memory);
}

void opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_fini_function(void * message_memory)
{
  opennav_coverage_msgs__msg__HeadlandMode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_message_member_array[2] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__msg__HeadlandMode, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs__msg__HeadlandMode, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_message_members = {
  "opennav_coverage_msgs__msg",  // message namespace
  "HeadlandMode",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs__msg__HeadlandMode),
  opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_message_member_array,  // message members
  opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_init_function,  // function to initialize message memory (memory has to be allocated)
  opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_message_type_support_handle = {
  0,
  &opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opennav_coverage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opennav_coverage_msgs, msg, HeadlandMode)() {
  if (!opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_message_type_support_handle.typesupport_identifier) {
    opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opennav_coverage_msgs__msg__HeadlandMode__rosidl_typesupport_introspection_c__HeadlandMode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
