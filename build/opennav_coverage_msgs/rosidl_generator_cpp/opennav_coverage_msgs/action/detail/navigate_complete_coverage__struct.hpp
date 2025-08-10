// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from opennav_coverage_msgs:action/NavigateCompleteCoverage.idl
// generated code does not contain a copyright notice

#ifndef OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__NAVIGATE_COMPLETE_COVERAGE__STRUCT_HPP_
#define OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__NAVIGATE_COMPLETE_COVERAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polygons'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Goal __attribute__((deprecated))
#else
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Goal __declspec(deprecated)
#endif

namespace opennav_coverage_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateCompleteCoverage_Goal_
{
  using Type = NavigateCompleteCoverage_Goal_<ContainerAllocator>;

  explicit NavigateCompleteCoverage_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->frame_id = "map";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->field_filepath = "";
      this->frame_id = "";
      this->behavior_tree = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field_filepath = "";
      this->behavior_tree = "";
    }
  }

  explicit NavigateCompleteCoverage_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field_filepath(_alloc),
    frame_id(_alloc),
    behavior_tree(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->frame_id = "map";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->field_filepath = "";
      this->frame_id = "";
      this->behavior_tree = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field_filepath = "";
      this->behavior_tree = "";
    }
  }

  // field types and members
  using _field_filepath_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _field_filepath_type field_filepath;
  using _polygons_type =
    std::vector<geometry_msgs::msg::Polygon_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Polygon_<ContainerAllocator>>>;
  _polygons_type polygons;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _behavior_tree_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_tree_type behavior_tree;

  // setters for named parameter idiom
  Type & set__field_filepath(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->field_filepath = _arg;
    return *this;
  }
  Type & set__polygons(
    const std::vector<geometry_msgs::msg::Polygon_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Polygon_<ContainerAllocator>>> & _arg)
  {
    this->polygons = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__behavior_tree(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_tree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Goal
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Goal
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateCompleteCoverage_Goal_ & other) const
  {
    if (this->field_filepath != other.field_filepath) {
      return false;
    }
    if (this->polygons != other.polygons) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->behavior_tree != other.behavior_tree) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateCompleteCoverage_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateCompleteCoverage_Goal_

// alias to use template instance with default allocator
using NavigateCompleteCoverage_Goal =
  opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace opennav_coverage_msgs


#ifndef _WIN32
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Result __attribute__((deprecated))
#else
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Result __declspec(deprecated)
#endif

namespace opennav_coverage_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateCompleteCoverage_Result_
{
  using Type = NavigateCompleteCoverage_Result_<ContainerAllocator>;

  explicit NavigateCompleteCoverage_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
    }
  }

  explicit NavigateCompleteCoverage_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
    }
  }

  // field types and members
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t NONE =
    0u;

  // pointer types
  using RawPtr =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Result
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Result
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateCompleteCoverage_Result_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateCompleteCoverage_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateCompleteCoverage_Result_

// alias to use template instance with default allocator
using NavigateCompleteCoverage_Result =
  opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t NavigateCompleteCoverage_Result_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace opennav_coverage_msgs


// Include directives for member types
// Member 'current_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'navigation_time'
// Member 'estimated_time_remaining'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Feedback __declspec(deprecated)
#endif

namespace opennav_coverage_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateCompleteCoverage_Feedback_
{
  using Type = NavigateCompleteCoverage_Feedback_<ContainerAllocator>;

  explicit NavigateCompleteCoverage_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_init),
    navigation_time(_init),
    estimated_time_remaining(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_recoveries = 0;
      this->distance_remaining = 0.0f;
    }
  }

  explicit NavigateCompleteCoverage_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_alloc, _init),
    navigation_time(_alloc, _init),
    estimated_time_remaining(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_recoveries = 0;
      this->distance_remaining = 0.0f;
    }
  }

  // field types and members
  using _current_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _current_pose_type current_pose;
  using _navigation_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _navigation_time_type navigation_time;
  using _estimated_time_remaining_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _estimated_time_remaining_type estimated_time_remaining;
  using _number_of_recoveries_type =
    int16_t;
  _number_of_recoveries_type number_of_recoveries;
  using _distance_remaining_type =
    float;
  _distance_remaining_type distance_remaining;

  // setters for named parameter idiom
  Type & set__current_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__navigation_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->navigation_time = _arg;
    return *this;
  }
  Type & set__estimated_time_remaining(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->estimated_time_remaining = _arg;
    return *this;
  }
  Type & set__number_of_recoveries(
    const int16_t & _arg)
  {
    this->number_of_recoveries = _arg;
    return *this;
  }
  Type & set__distance_remaining(
    const float & _arg)
  {
    this->distance_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Feedback
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_Feedback
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateCompleteCoverage_Feedback_ & other) const
  {
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->navigation_time != other.navigation_time) {
      return false;
    }
    if (this->estimated_time_remaining != other.estimated_time_remaining) {
      return false;
    }
    if (this->number_of_recoveries != other.number_of_recoveries) {
      return false;
    }
    if (this->distance_remaining != other.distance_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateCompleteCoverage_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateCompleteCoverage_Feedback_

// alias to use template instance with default allocator
using NavigateCompleteCoverage_Feedback =
  opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace opennav_coverage_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_SendGoal_Request __declspec(deprecated)
#endif

namespace opennav_coverage_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateCompleteCoverage_SendGoal_Request_
{
  using Type = NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator>;

  explicit NavigateCompleteCoverage_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit NavigateCompleteCoverage_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_SendGoal_Request
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_SendGoal_Request
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateCompleteCoverage_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateCompleteCoverage_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateCompleteCoverage_SendGoal_Request_

// alias to use template instance with default allocator
using NavigateCompleteCoverage_SendGoal_Request =
  opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace opennav_coverage_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_SendGoal_Response __declspec(deprecated)
#endif

namespace opennav_coverage_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateCompleteCoverage_SendGoal_Response_
{
  using Type = NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator>;

  explicit NavigateCompleteCoverage_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NavigateCompleteCoverage_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_SendGoal_Response
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_SendGoal_Response
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateCompleteCoverage_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateCompleteCoverage_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateCompleteCoverage_SendGoal_Response_

// alias to use template instance with default allocator
using NavigateCompleteCoverage_SendGoal_Response =
  opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace opennav_coverage_msgs
{

namespace action
{

struct NavigateCompleteCoverage_SendGoal
{
  using Request = opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Request;
  using Response = opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal_Response;
};

}  // namespace action

}  // namespace opennav_coverage_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_GetResult_Request __declspec(deprecated)
#endif

namespace opennav_coverage_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateCompleteCoverage_GetResult_Request_
{
  using Type = NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator>;

  explicit NavigateCompleteCoverage_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit NavigateCompleteCoverage_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_GetResult_Request
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_GetResult_Request
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateCompleteCoverage_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateCompleteCoverage_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateCompleteCoverage_GetResult_Request_

// alias to use template instance with default allocator
using NavigateCompleteCoverage_GetResult_Request =
  opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace opennav_coverage_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_GetResult_Response __declspec(deprecated)
#endif

namespace opennav_coverage_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateCompleteCoverage_GetResult_Response_
{
  using Type = NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator>;

  explicit NavigateCompleteCoverage_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigateCompleteCoverage_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_GetResult_Response
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_GetResult_Response
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateCompleteCoverage_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateCompleteCoverage_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateCompleteCoverage_GetResult_Response_

// alias to use template instance with default allocator
using NavigateCompleteCoverage_GetResult_Response =
  opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace opennav_coverage_msgs

namespace opennav_coverage_msgs
{

namespace action
{

struct NavigateCompleteCoverage_GetResult
{
  using Request = opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Request;
  using Response = opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult_Response;
};

}  // namespace action

}  // namespace opennav_coverage_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "opennav_coverage_msgs/action/detail/navigate_complete_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_FeedbackMessage __declspec(deprecated)
#endif

namespace opennav_coverage_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateCompleteCoverage_FeedbackMessage_
{
  using Type = NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator>;

  explicit NavigateCompleteCoverage_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit NavigateCompleteCoverage_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_FeedbackMessage
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opennav_coverage_msgs__action__NavigateCompleteCoverage_FeedbackMessage
    std::shared_ptr<opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateCompleteCoverage_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateCompleteCoverage_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateCompleteCoverage_FeedbackMessage_

// alias to use template instance with default allocator
using NavigateCompleteCoverage_FeedbackMessage =
  opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace opennav_coverage_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace opennav_coverage_msgs
{

namespace action
{

struct NavigateCompleteCoverage
{
  /// The goal message defined in the action definition.
  using Goal = opennav_coverage_msgs::action::NavigateCompleteCoverage_Goal;
  /// The result message defined in the action definition.
  using Result = opennav_coverage_msgs::action::NavigateCompleteCoverage_Result;
  /// The feedback message defined in the action definition.
  using Feedback = opennav_coverage_msgs::action::NavigateCompleteCoverage_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = opennav_coverage_msgs::action::NavigateCompleteCoverage_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = opennav_coverage_msgs::action::NavigateCompleteCoverage_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = opennav_coverage_msgs::action::NavigateCompleteCoverage_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct NavigateCompleteCoverage NavigateCompleteCoverage;

}  // namespace action

}  // namespace opennav_coverage_msgs

#endif  // OPENNAV_COVERAGE_MSGS__ACTION__DETAIL__NAVIGATE_COMPLETE_COVERAGE__STRUCT_HPP_
