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
            "dual_ekf_navsat.launch.py")),
    )

    opennav_launch = IncludeLaunchDescription(
    PythonLaunchDescriptionSource(os.path.join(
        get_package_share_directory("opennav_coverage_demo"),
        "test_complete_launch.py"
    )),
    condition=IfCondition(use_opennav)
)





    frames_transform = Node(
    package="psolar_localization",
    executable="tilted_frames_publisher",
    output="screen",
    )
   
    return LaunchDescription([
        use_opennav_arg,
        gazebo,
        localization,
        frames_transform,
        opennav_launch,
    ])
