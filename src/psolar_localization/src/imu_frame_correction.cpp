#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include <string>

// A minimal C++ node to correct the frame_id of an IMU message.
class ImuFrameCorrector : public rclcpp::Node
{
public:
  // Constructor
  ImuFrameCorrector()
  : Node("imu_frame_corrector_node")
  {
    // Declare a parameter for the desired frame_id. This makes the node reusable.
    // The default value is "imu_link".
    this->declare_parameter<std::string>("correct_frame_id", "imu_link");

    // Read the parameter value.
    correct_frame_id_ = this->get_parameter("correct_frame_id").as_string();

    // Create the publisher that will broadcast the corrected IMU messages.
    publisher_ = this->create_publisher<sensor_msgs::msg::Imu>("/imu/corrected", 10);

    // Create the subscriber to the original IMU topic.
    // It will call the 'topic_callback' function for each incoming message.
    subscription_ = this->create_subscription<sensor_msgs::msg::Imu>(
      "/imu", 10, std::bind(&ImuFrameCorrector::topic_callback, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "IMU Frame Corrector Node has started.");
    RCLCPP_INFO(this->get_logger(), "Will republish on '/imu/corrected' with frame_id: '%s'", correct_frame_id_.c_str());
  }

private:
  // Callback function that runs when a message is received on the /imu topic.
  void topic_callback(const sensor_msgs::msg::Imu::SharedPtr msg) const
  {
    // Create a copy of the incoming message to avoid modifying the original.
    auto corrected_msg = *msg;

    // --- The Core Logic ---
    // Overwrite the frame_id with the correct one.
    corrected_msg.header.frame_id = correct_frame_id_;

    // Publish the modified message.
    publisher_->publish(corrected_msg);
  }

  // Private member variables
  rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr subscription_;
  rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr publisher_;
  std::string correct_frame_id_;
};

// Main function: initializes the node.
int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ImuFrameCorrector>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
