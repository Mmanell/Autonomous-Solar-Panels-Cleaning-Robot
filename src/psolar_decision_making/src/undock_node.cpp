#include "psolar_decision_making/undock_node.hpp"

UndockAction::UndockAction(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config)
{
    node_ = rclcpp::Node::make_shared("undock_bt_node");
    action_client_ = rclcpp_action::create_client<UndockRobot>(
        node_, "/goto_pose/undock_robot");

    // Wait for the action server to be available
    if (!action_client_->wait_for_action_server(std::chrono::seconds(5))) {
        RCLCPP_WARN(node_->get_logger(), "Undock action server not available yet.");
    }
}

BT::PortsList UndockAction::providedPorts()
{
    return {};
}

BT::NodeStatus UndockAction::tick()
{
    RCLCPP_INFO(node_->get_logger(), "Calling undock action server...");

    auto goal_msg = UndockRobot::Goal();
    goal_msg.dock_type = "nova_carter_dock";
    goal_msg.max_undocking_time = 2.0;

    auto send_goal_options = rclcpp_action::Client<UndockRobot>::SendGoalOptions();
    send_goal_options.result_callback =
        [](const rclcpp_action::ClientGoalHandle<UndockRobot>::WrappedResult & result) {
            RCLCPP_INFO(rclcpp::get_logger("BT"), "Undock action finished with code %d",
                        static_cast<int>(result.code));
        };

    action_client_->async_send_goal(goal_msg, send_goal_options);

    // Return SUCCESS immediately for BT purposes
    return BT::NodeStatus::SUCCESS;
}
