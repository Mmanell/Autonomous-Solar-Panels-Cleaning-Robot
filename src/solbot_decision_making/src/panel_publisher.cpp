#include <memory>
#include <vector>
#include <chrono>
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

#include "rclcpp/rclcpp.hpp"
#include "opennav_coverage_msgs/msg/coordinate.hpp"
#include "opennav_coverage_msgs/msg/coordinates.hpp"
#include "opennav_coverage_msgs/msg/fields.hpp"

#include "yaml-cpp/yaml.h"


using namespace std::chrono_literals;

class FieldPublisher : public rclcpp::Node
{
public:
    FieldPublisher()
        : Node("field_publisher")
    {
        // Declare YAML file parameters with defaults
        this->declare_parameter<std::string>("fields_yaml", "src/solbot_decision_making/config/panels_fields.yaml");
        this->declare_parameter<std::string>("to_clean_yaml", "src/solbot_decision_making/config/panels_to_clean.yaml");

        fields_yaml_file_ = this->get_parameter("fields_yaml").as_string();
        to_clean_yaml_file_ = this->get_parameter("to_clean_yaml").as_string();

        RCLCPP_INFO(this->get_logger(), "Using fields YAML: %s", fields_yaml_file_.c_str());
        RCLCPP_INFO(this->get_logger(), "Using panels to clean YAML: %s", to_clean_yaml_file_.c_str());

        rclcpp::QoS qos_settings(10);
        qos_settings.transient_local().reliable();

        publisher_ = this->create_publisher<opennav_coverage_msgs::msg::Fields>("field_topic", qos_settings);

        publishFields();
    }

private:
    void publishFields()
    {
        YAML::Node panels_yaml;
        YAML::Node to_clean_yaml;

        try {
            panels_yaml = YAML::LoadFile(fields_yaml_file_);
            to_clean_yaml = YAML::LoadFile(to_clean_yaml_file_);
        } catch (const std::exception &e) {
            RCLCPP_ERROR(this->get_logger(), "Failed to load YAML file: %s", e.what());
            return;
        }

        // Read panel IDs to clean
        std::vector<std::string> panels_to_clean;
        for (const auto &id_node : to_clean_yaml["panels_to_clean"]) {
            panels_to_clean.push_back(std::to_string(id_node.as<int>()));
        }

        opennav_coverage_msgs::msg::Fields msg_all;

        for (auto it = panels_yaml["panels"].begin(); it != panels_yaml["panels"].end(); ++it)
        {
            std::string panel_id = it->first.as<std::string>();
            if (std::find(panels_to_clean.begin(), panels_to_clean.end(), panel_id) == panels_to_clean.end()) {
                // This panel is not in the to-clean list, skip it
                continue;
            }

            auto panel = it->second;
            auto field = panel["field"];

            opennav_coverage_msgs::msg::Coordinates field_msg;

            for (const auto &pt : field)
            {
                opennav_coverage_msgs::msg::Coordinate c;
                c.axis1 = pt[0].as<float>();
                c.axis2 = pt[1].as<float>();
                field_msg.coordinates.push_back(c);
            }

            msg_all.fields.push_back(field_msg);
        }

        publisher_->publish(msg_all);
        RCLCPP_INFO(this->get_logger(), "Published %zu fields according to panels_to_clean", msg_all.fields.size());
    }

    rclcpp::Publisher<opennav_coverage_msgs::msg::Fields>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::string fields_yaml_file_;
    std::string to_clean_yaml_file_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<FieldPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
