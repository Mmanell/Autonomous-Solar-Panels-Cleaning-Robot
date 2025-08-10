// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from opennav_coverage_msgs:action/NavigateCompleteCoverage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateCompleteCoverage_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal(_init);
}

void NavigateCompleteCoverage_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal *>(message_memory);
  typed_message->~NavigateCompleteCoverage_Goal();
}

size_t size_function__NavigateCompleteCoverage_Goal__polygons(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Polygon> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavigateCompleteCoverage_Goal__polygons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Polygon> *>(untyped_member);
  return &member[index];
}

void * get_function__NavigateCompleteCoverage_Goal__polygons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Polygon> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavigateCompleteCoverage_Goal__polygons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Polygon *>(
    get_const_function__NavigateCompleteCoverage_Goal__polygons(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Polygon *>(untyped_value);
  value = item;
}

void assign_function__NavigateCompleteCoverage_Goal__polygons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Polygon *>(
    get_function__NavigateCompleteCoverage_Goal__polygons(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Polygon *>(untyped_value);
  item = value;
}

void resize_function__NavigateCompleteCoverage_Goal__polygons(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Polygon> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateCompleteCoverage_Goal_message_member_array[4] = {
  {
    "field_filepath",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal, field_filepath),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "polygons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Polygon>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal, polygons),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavigateCompleteCoverage_Goal__polygons,  // size() function pointer
    get_const_function__NavigateCompleteCoverage_Goal__polygons,  // get_const(index) function pointer
    get_function__NavigateCompleteCoverage_Goal__polygons,  // get(index) function pointer
    fetch_function__NavigateCompleteCoverage_Goal__polygons,  // fetch(index, &value) function pointer
    assign_function__NavigateCompleteCoverage_Goal__polygons,  // assign(index, value) function pointer
    resize_function__NavigateCompleteCoverage_Goal__polygons  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "behavior_tree",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal, behavior_tree),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateCompleteCoverage_Goal_message_members = {
  "opennav_coverage_msgs::action",  // message namespace
  "NavigateCompleteCoverage_Goal",  // message name
  4,  // number of fields
  sizeof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal),
  NavigateCompleteCoverage_Goal_message_member_array,  // message members
  NavigateCompleteCoverage_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateCompleteCoverage_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateCompleteCoverage_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>()
{
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_Goal)() {
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateCompleteCoverage_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opennav_coverage_msgs::action::NavigateCompleteCoverage_Result(_init);
}

void NavigateCompleteCoverage_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result *>(message_memory);
  typed_message->~NavigateCompleteCoverage_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateCompleteCoverage_Result_message_member_array[1] = {
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Result, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateCompleteCoverage_Result_message_members = {
  "opennav_coverage_msgs::action",  // message namespace
  "NavigateCompleteCoverage_Result",  // message name
  1,  // number of fields
  sizeof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Result),
  NavigateCompleteCoverage_Result_message_member_array,  // message members
  NavigateCompleteCoverage_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateCompleteCoverage_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateCompleteCoverage_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>()
{
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_Result)() {
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateCompleteCoverage_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback(_init);
}

void NavigateCompleteCoverage_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback *>(message_memory);
  typed_message->~NavigateCompleteCoverage_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateCompleteCoverage_Feedback_message_member_array[5] = {
  {
    "current_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback, current_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "navigation_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback, navigation_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "estimated_time_remaining",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback, estimated_time_remaining),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "number_of_recoveries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback, number_of_recoveries),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance_remaining",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback, distance_remaining),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateCompleteCoverage_Feedback_message_members = {
  "opennav_coverage_msgs::action",  // message namespace
  "NavigateCompleteCoverage_Feedback",  // message name
  5,  // number of fields
  sizeof(opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback),
  NavigateCompleteCoverage_Feedback_message_member_array,  // message members
  NavigateCompleteCoverage_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateCompleteCoverage_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateCompleteCoverage_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>()
{
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_Feedback)() {
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateCompleteCoverage_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request(_init);
}

void NavigateCompleteCoverage_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request *>(message_memory);
  typed_message->~NavigateCompleteCoverage_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateCompleteCoverage_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateCompleteCoverage_SendGoal_Request_message_members = {
  "opennav_coverage_msgs::action",  // message namespace
  "NavigateCompleteCoverage_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request),
  NavigateCompleteCoverage_SendGoal_Request_message_member_array,  // message members
  NavigateCompleteCoverage_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateCompleteCoverage_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateCompleteCoverage_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>()
{
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_SendGoal_Request)() {
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateCompleteCoverage_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response(_init);
}

void NavigateCompleteCoverage_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response *>(message_memory);
  typed_message->~NavigateCompleteCoverage_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateCompleteCoverage_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateCompleteCoverage_SendGoal_Response_message_members = {
  "opennav_coverage_msgs::action",  // message namespace
  "NavigateCompleteCoverage_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response),
  NavigateCompleteCoverage_SendGoal_Response_message_member_array,  // message members
  NavigateCompleteCoverage_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateCompleteCoverage_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateCompleteCoverage_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>()
{
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_SendGoal_Response)() {
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers NavigateCompleteCoverage_SendGoal_service_members = {
  "opennav_coverage_msgs::action",  // service namespace
  "NavigateCompleteCoverage_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t NavigateCompleteCoverage_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateCompleteCoverage_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request(_init);
}

void NavigateCompleteCoverage_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request *>(message_memory);
  typed_message->~NavigateCompleteCoverage_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateCompleteCoverage_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateCompleteCoverage_GetResult_Request_message_members = {
  "opennav_coverage_msgs::action",  // message namespace
  "NavigateCompleteCoverage_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request),
  NavigateCompleteCoverage_GetResult_Request_message_member_array,  // message members
  NavigateCompleteCoverage_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateCompleteCoverage_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateCompleteCoverage_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>()
{
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_GetResult_Request)() {
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateCompleteCoverage_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response(_init);
}

void NavigateCompleteCoverage_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response *>(message_memory);
  typed_message->~NavigateCompleteCoverage_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateCompleteCoverage_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateCompleteCoverage_GetResult_Response_message_members = {
  "opennav_coverage_msgs::action",  // message namespace
  "NavigateCompleteCoverage_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response),
  NavigateCompleteCoverage_GetResult_Response_message_member_array,  // message members
  NavigateCompleteCoverage_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateCompleteCoverage_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateCompleteCoverage_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>()
{
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_GetResult_Response)() {
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers NavigateCompleteCoverage_GetResult_service_members = {
  "opennav_coverage_msgs::action",  // service namespace
  "NavigateCompleteCoverage_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t NavigateCompleteCoverage_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace opennav_coverage_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigateCompleteCoverage_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage(_init);
}

void NavigateCompleteCoverage_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage *>(message_memory);
  typed_message->~NavigateCompleteCoverage_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigateCompleteCoverage_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigateCompleteCoverage_FeedbackMessage_message_members = {
  "opennav_coverage_msgs::action",  // message namespace
  "NavigateCompleteCoverage_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage),
  NavigateCompleteCoverage_FeedbackMessage_message_member_array,  // message members
  NavigateCompleteCoverage_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateCompleteCoverage_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigateCompleteCoverage_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigateCompleteCoverage_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace opennav_coverage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage>()
{
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, opennav_coverage_msgs, action, NavigateCompleteCoverage_FeedbackMessage)() {
  return &::opennav_coverage_msgs::action::rosidl_typesupport_introspection_cpp::NavigateCompleteCoverage_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
