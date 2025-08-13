#include <memory>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Scalar.h>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <tf2_ros/static_transform_broadcaster.h>

class TiltedFramesPublisher : public rclcpp::Node
{
public:
    TiltedFramesPublisher()
    : Node("tilted_frames_publisher")
    {
        constexpr double roll_angle_deg = 10.0; // Tilt angle in degrees
        double roll_angle_rad = tf2Radians(roll_angle_deg);

        static_broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);

        publishStaticTransforms(roll_angle_rad);
    }

private:
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> static_broadcaster_;

    void publishStaticTransforms(double roll_angle_rad)
    {
        // Convert roll to quaternion
        tf2::Quaternion q;
        q.setRPY(roll_angle_rad, 0.0, 0.0);

        // Transform creation
        auto make_transform = [this, &q](const std::string &parent, const std::string &child)
        {
            geometry_msgs::msg::TransformStamped t;
            t.header.stamp = this->get_clock()->now();
            t.header.frame_id = parent;
            t.child_frame_id = child;
            t.transform.translation.x = 0.0;
            t.transform.translation.y = 0.0;
            t.transform.translation.z = 0.0;
            t.transform.rotation.x = q.x();
            t.transform.rotation.y = q.y();
            t.transform.rotation.z = q.z();
            t.transform.rotation.w = q.w();
            return t;
        };

        // Create both transforms
        auto map_to_map_tilted   = make_transform("map",  "map_tilted");
        // auto odom_to_odom_tilted = make_transform("odom", "odom_tilted");
        // auto base_to_base_tilted = make_transform("base_link", "base_link_tilted");
        // auto footprint_to_footprint_tilted = make_transform("base_footprint", "base_footprint_tilted");

        // Send both transforms
        static_broadcaster_->sendTransform({map_to_map_tilted });

        RCLCPP_INFO(this->get_logger(),
                    "Published static tilted transforms with roll = %.2f degrees",
                    tf2Degrees(roll_angle_rad));
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TiltedFramesPublisher>());
    rclcpp::shutdown();
    return 0;
}
