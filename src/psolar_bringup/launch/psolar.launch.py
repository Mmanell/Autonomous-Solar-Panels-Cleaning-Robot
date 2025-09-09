import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    use_sim_time_arg = DeclareLaunchArgument(
            "use_sim_time",
            default_value="true",
            description="Use simulation time"
        )
        
    psolar_localization_pkg = get_package_share_directory("psolar_localization")


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
            "localization_2d.launch.py")),
    )
    
    rviz = Node(
            package="rviz2",
            executable="rviz2",
            arguments=["-d", os.path.join(
                    get_package_share_directory("psolar_bringup"),
                    "rviz",
                    "openav_rviz.rviz"
                )
            ],
            output="screen",
            parameters=[{"use_sim_time": True}],
    )

    odom_clone= Node(
        package="psolar_localization",
        executable="corrected_odometry_publisher",
        output="screen",
        parameters=[{"use_sim_time": True}],
    )

    battery_sim = Node(
        package="psolar_bringup",
        executable="battery_simulation.py",
        output="screen",
        parameters=[{"use_sim_time": True}],
    )

    twist_mux_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory("twist_mux"), "launch", "twist_mux_launch.py")
        ),
        launch_arguments={
            "cmd_vel_out": "cmd_vel",
            "config_topics": os.path.join(psolar_localization_pkg, "config", "twist_mux.yaml"),
            "config_locks": "", 
            "use_sim_time": LaunchConfiguration("use_sim_time"),
        }.items(),
    )

    # cleaning = Node(
    #     package="psolar_localization",
    #     executable="cleaning_launcher",
    #     output="screen",
    #     parameters=[{"use_sim_time": True}],
    # )

    # frames_transform = Node(
    #     package="psolar_localization",
    #     executable="tilted_frames_publisher",
    #     output="screen",
    # )

    return LaunchDescription([
        use_sim_time_arg,
        gazebo,
        rviz,
        localization,
        twist_mux_launch,
        odom_clone,
        battery_sim,

    ])
