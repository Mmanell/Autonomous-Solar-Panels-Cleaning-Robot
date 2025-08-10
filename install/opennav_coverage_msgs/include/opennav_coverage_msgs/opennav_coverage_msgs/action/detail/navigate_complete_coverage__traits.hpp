// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from opennav_coverage_msgs:action/NavigateCompleteCoverage.idl
// generated code does not contain a copyright notice

#ifndef OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__NAVIGATE_COMPLETE_COVERAGE__TRAITS_HPP_
#define OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__NAVIGATE_COMPLETE_COVERAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polygons'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateCompleteCoverage_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: field_filepath
  {
    out << "field_filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.field_filepath, out);
    out << ", ";
  }

  // member: polygons
  {
    if (msg.polygons.size() == 0) {
      out << "polygons: []";
    } else {
      out << "polygons: [";
      size_t pending_items = msg.polygons.size();
      for (auto item : msg.polygons) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: behavior_tree
  {
    out << "behavior_tree: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_tree, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateCompleteCoverage_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: field_filepath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field_filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.field_filepath, out);
    out << "\n";
  }

  // member: polygons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygons.size() == 0) {
      out << "polygons: []\n";
    } else {
      out << "polygons:\n";
      for (auto item : msg.polygons) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: behavior_tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_tree: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_tree, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateCompleteCoverage_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opennav_coverage_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  opennav_coverage_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opennav_coverage_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal & msg)
{
  return opennav_coverage_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_Goal";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace opennav_coverage_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateCompleteCoverage_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateCompleteCoverage_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateCompleteCoverage_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opennav_coverage_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opennav_coverage_msgs::action::NavigateCompleteCoverage_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  opennav_coverage_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opennav_coverage_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const opennav_coverage_msgs::action::NavigateCompleteCoverage_Result & msg)
{
  return opennav_coverage_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_Result";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_Result";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'navigation_time'
// Member 'estimated_time_remaining'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateCompleteCoverage_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_pose
  {
    out << "current_pose: ";
    to_flow_style_yaml(msg.current_pose, out);
    out << ", ";
  }

  // member: navigation_time
  {
    out << "navigation_time: ";
    to_flow_style_yaml(msg.navigation_time, out);
    out << ", ";
  }

  // member: estimated_time_remaining
  {
    out << "estimated_time_remaining: ";
    to_flow_style_yaml(msg.estimated_time_remaining, out);
    out << ", ";
  }

  // member: number_of_recoveries
  {
    out << "number_of_recoveries: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_recoveries, out);
    out << ", ";
  }

  // member: distance_remaining
  {
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateCompleteCoverage_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pose:\n";
    to_block_style_yaml(msg.current_pose, out, indentation + 2);
  }

  // member: navigation_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigation_time:\n";
    to_block_style_yaml(msg.navigation_time, out, indentation + 2);
  }

  // member: estimated_time_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_time_remaining:\n";
    to_block_style_yaml(msg.estimated_time_remaining, out, indentation + 2);
  }

  // member: number_of_recoveries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_recoveries: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_recoveries, out);
    out << "\n";
  }

  // member: distance_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateCompleteCoverage_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opennav_coverage_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  opennav_coverage_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opennav_coverage_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback & msg)
{
  return opennav_coverage_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_Feedback";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__traits.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateCompleteCoverage_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateCompleteCoverage_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateCompleteCoverage_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opennav_coverage_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  opennav_coverage_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opennav_coverage_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request & msg)
{
  return opennav_coverage_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_SendGoal_Request";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateCompleteCoverage_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateCompleteCoverage_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateCompleteCoverage_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opennav_coverage_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  opennav_coverage_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opennav_coverage_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response & msg)
{
  return opennav_coverage_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_SendGoal_Response";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_SendGoal";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>::value &&
    has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>::value &&
    has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateCompleteCoverage_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateCompleteCoverage_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateCompleteCoverage_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opennav_coverage_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  opennav_coverage_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opennav_coverage_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request & msg)
{
  return opennav_coverage_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_GetResult_Request";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__traits.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateCompleteCoverage_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateCompleteCoverage_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateCompleteCoverage_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opennav_coverage_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  opennav_coverage_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opennav_coverage_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response & msg)
{
  return opennav_coverage_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_GetResult_Response";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>::value> {};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>::value> {};

template<>
struct is_message<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_GetResult";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>::value &&
    has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>::value &&
    has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>::value
  >
{
};

template<>
struct is_service<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__traits.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateCompleteCoverage_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateCompleteCoverage_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateCompleteCoverage_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opennav_coverage_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  opennav_coverage_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opennav_coverage_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage & msg)
{
  return opennav_coverage_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage>()
{
  return "opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage";
}

template<>
inline const char * name<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage>()
{
  return "opennav_coverage_msgs/action/NavigateCompleteCoverage_FeedbackMessage";
}

template<>
struct has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<opennav_coverage_msgs::action::NavigateCompleteCoverage>
  : std::true_type
{
};

template<>
struct is_action_goal<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__NAVIGATE_COMPLETE_COVERAGE__TRAITS_HPP_
