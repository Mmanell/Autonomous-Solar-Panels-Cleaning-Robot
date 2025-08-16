import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    use_opennav = LaunchConfiguration("use_opennav")

    use_opennav_arg = DeclareLaunchArgument(
        "use_opennav",
        default_value="false",
        description="Whether to launch OpenNav path planning"
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory("psolar_gazebo"),
            "launch",
            "empty_world.launch.py")),
    )
    
    localization = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory("psolar_localization"),
            "launch",
            "localization_on_slope.launch.py")),
    )

    opennav_launch = IncludeLaunchDescription(
    PythonLaunchDescriptionSource(os.path.join(
        get_package_share_directory("opennav_coverage_demo"),
        "test_complete_launch.py"
    )),
    condition=IfCondition(use_opennav)
    )
    
    rviz = Node(
            package="rviz2",
            executable="rviz2",
            arguments=["-d", os.path.join(
                    get_package_share_directory("psolar_bringup"),
                    "rviz",
                    "opennav_rviz.rviz"
                )
            ],
            output="screen",
            parameters=[{"use_sim_time": True}],
    )



    frames_transform = Node(
        package="psolar_localization",
        executable="tilted_frames_publisher",
        output="screen",
    )

    odom_clone= Node(
        package="psolar_localization",
        executable="corrected_odometry_publisher",
        output="screen",
        parameters=[{"use_sim_time": True}],
    )
   
    return LaunchDescription([
        use_opennav_arg,
        gazebo,
        rviz,
        localization,
        frames_transform,
        odom_clone,
        opennav_launch,
    ])
