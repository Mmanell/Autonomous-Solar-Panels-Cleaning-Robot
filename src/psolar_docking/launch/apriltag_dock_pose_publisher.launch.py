#!/usr/bin/env python3
"""
Launch file for publishing the pose of the AprilTag on the detected_dock_pose topic.

Author: Automatic Addison
Date: December 11, 2024
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, TextSubstitution, PythonExpression
from launch_ros.actions import ComposableNodeContainer, Node
from launch_ros.descriptions import ComposableNode
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    """Generate a launch description for docking AprilTag detection."""

    # Package name
    package_name_docking = 'psolar_docking'

    # Config file
    apriltag_ros_config_filename = 'apriltags_36h11.yaml'
    pkg_share_docking = FindPackageShare(package=package_name_docking).find(package_name_docking)
    default_apriltag_ros_config_file_path = PathJoinSubstitution(
        [pkg_share_docking, 'config', apriltag_ros_config_filename]
    )

    # Launch arguments
    apriltag_config_file = LaunchConfiguration('apriltag_config_file')
    camera_frame_type = LaunchConfiguration('camera_frame_type')
    camera_namespace = LaunchConfiguration('camera_namespace')
    tag_family = LaunchConfiguration('tag_family')
    tag_id = LaunchConfiguration('tag_id')
    use_sim_time = LaunchConfiguration('use_sim_time')

    declare_apriltag_config_file_cmd = DeclareLaunchArgument(
        'apriltag_config_file', default_value=default_apriltag_ros_config_file_path,
        description='Full path to the AprilTag config file'
    )
    declare_camera_frame_type_cmd = DeclareLaunchArgument(
        'camera_frame_type', default_value='_depth_optical_frame',
        description='Camera frame type (e.g., _depth_optical_frame)'
    )
    declare_camera_namespace_cmd = DeclareLaunchArgument(
        'camera_namespace', default_value='camera',
        description='Namespace for camera and AprilTag nodes'
    )
    declare_tag_family_cmd = DeclareLaunchArgument(
        'tag_family', default_value='tag36h11',
        description='AprilTag family'
    )
    declare_tag_id_cmd = DeclareLaunchArgument(
        'tag_id', default_value='0',
        description='AprilTag ID'
    )
    declare_use_sim_time_cmd = DeclareLaunchArgument(
        'use_sim_time', default_value='true',
        description='Use simulation clock'
    )

    # Rectify node
    rectify_node = ComposableNode(
        package='image_proc',
        plugin='image_proc::RectifyNode',
        name='rectify_node',
        namespace=camera_namespace,
        remappings=[
            ('image', 'color/image_raw'),
            ('image_rect', 'color/image_rect'),
        ],
        parameters=[{
            'queue_size': 5,
            'interpolation': 1,
            'use_sim_time': use_sim_time,
            'image_transport': 'raw'
        }],
        extra_arguments=[{'use_intra_process_comms': True}]
    )

    # AprilTag node
    apriltag_ros_node = ComposableNode(
        package='apriltag_ros',
        plugin='AprilTagNode',
        name='apriltag_node',
        namespace=camera_namespace,
        remappings=[
            ('image_rect', 'color/image_rect'),
            ('camera_info', 'color/camera_info'),
        ],
        parameters=[apriltag_config_file, {'use_sim_time': use_sim_time}],
        extra_arguments=[{'use_intra_process_comms': True}]
    )

    # Composable container
    start_apriltag_dock_pose_publisher = ComposableNodeContainer(
        name='apriltag_dock_pose_publisher',
        namespace=camera_namespace,
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[rectify_node, apriltag_ros_node],
        output='screen'
    )

    # Detected dock pose publisher node
    start_detected_dock_pose_publisher = Node(
        package='psolar_docking',
        executable='detected_dock_pose_publisher',
        parameters=[{
            'use_sim_time': use_sim_time,
            'parent_frame': PythonExpression(
                ["'", camera_namespace, camera_frame_type, "'"]
            ),
            'child_frame': PythonExpression(
                ["'", tag_family, ":", tag_id, "'"]
            ),
            'publish_rate': 10.0
        }],
        output='screen'
    )

    # Create launch description
    ld = LaunchDescription()
    ld.add_action(declare_apriltag_config_file_cmd)
    ld.add_action(declare_camera_frame_type_cmd)
    ld.add_action(declare_camera_namespace_cmd)
    ld.add_action(declare_tag_family_cmd)
    ld.add_action(declare_tag_id_cmd)
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(start_apriltag_dock_pose_publisher)
    ld.add_action(start_detected_dock_pose_publisher)

    return ld
