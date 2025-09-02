#pragma once

#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include <opennav_coverage_msgs/action/navigate_complete_coverage.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <geometry_msgs/msg/polygon.hpp>

class NavigateCoverage : public BT::StatefulActionNode
{
public:
  using CoverageAction = opennav_coverage_msgs::action::NavigateCompleteCoverage;
  using GoalHandleCoverage = rclcpp_action::ClientGoalHandle<CoverageAction>;

  NavigateCoverage(const std::string& name, const BT::NodeConfiguration& config);

  static BT::PortsList providedPorts()
  {
    return { BT::InputPort<geometry_msgs::msg::Polygon>("field") };
  }

  BT::NodeStatus onStart() override;
  BT::NodeStatus onRunning() override;
  void onHalted() override;

private:
  rclcpp::Node::SharedPtr node_;
  rclcpp_action::Client<CoverageAction>::SharedPtr action_client_;
  GoalHandleCoverage::SharedPtr goal_handle_;
  bool goal_done_;
  bool goal_succeeded_;
};
