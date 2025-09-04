#include "ament_index_cpp/get_package_share_directory.hpp"
#include <string>
#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/loggers/bt_cout_logger.h>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

// Include your action nodes headers
#include "psolar_decision_making/undock_node.hpp"
#include "psolar_decision_making/navigate_to_goal_node.hpp"
#include "psolar_decision_making/which_goal_node.hpp"
#include "psolar_decision_making/which_field_node.hpp"
#include "psolar_decision_making/clean_field_node.hpp"
#include "psolar_decision_making/planner_node.hpp"
#include "psolar_decision_making/pop_field_node.hpp"
#include "psolar_decision_making/battery_low_node.hpp"
#include "psolar_decision_making/dock_node.hpp"

int main(int argc, char **argv)
{
    // Initialize ROS2
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("bt_navigation_test");

    // Create BehaviorTree factory and register nodes
    BT::BehaviorTreeFactory factory;
    auto blackboard = BT::Blackboard::create();
    blackboard->set("node", node);
    factory.registerNodeType<Planner>("Planner");
    factory.registerNodeType<UndockAction>("Undock");
    factory.registerNodeType<BatteryLow>("BatteryLow");
    factory.registerNodeType<WhichGoal>("WhichGoal");
    factory.registerNodeType<NavigateToGoal>("NavigateToGoal");
    factory.registerNodeType<WhichField>("WhichField");
    factory.registerNodeType<NavigateCoverage>("NavigateCoverage");
    factory.registerNodeType<PopField>("PopField");
    factory.registerNodeType<DockRobotNode>("DockRobotNode");




    // Load the BT from XML file
    std::string pkg_path = ament_index_cpp::get_package_share_directory("psolar_decision_making");
    std::string xml_file = pkg_path + "/behavior_trees/mission_tree.xml";
    auto tree = factory.createTreeFromFile(xml_file,blackboard);

    BT::StdCoutLogger logger_cout(tree);

    // Tick the tree until success or failure
    BT::NodeStatus status = BT::NodeStatus::RUNNING;
    rclcpp::Rate rate(10); // 10 Hz
    while (rclcpp::ok() && status == BT::NodeStatus::RUNNING)
    {
        status = tree.tickOnce();   
        rclcpp::spin_some(node);
        rate.sleep();
    }

    if (status == BT::NodeStatus::SUCCESS)
        RCLCPP_INFO(node->get_logger(), "Navigation succeeded!");
    else
        RCLCPP_WARN(node->get_logger(), "Navigation failed or aborted!");

    rclcpp::shutdown();
    return 0;
}
