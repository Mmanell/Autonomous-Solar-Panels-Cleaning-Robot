import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from nav2_common.launch import RewrittenYaml
from launch_ros.descriptions import ParameterFile

def generate_launch_description():
    autostart = True
    use_sim_time = True
    param_substitutions = {
        'use_sim_time': str(use_sim_time),
        'autostart': str(autostart)}

    use_opennav = LaunchConfiguration("use_opennav")

    use_opennav_arg = DeclareLaunchArgument(
        "use_opennav",
        default_value="false",
        description="Whether to launch OpenNav path planning"
    )
    #launch_arguments={'use_sim_time': use_sim_time}.items()
    use_sim_time_arg = DeclareLaunchArgument(
            "use_sim_time",
            default_value="true",
            description="Use simulation time"
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
            "localization_2d.launch.py")),
    )

    # opennav_launch = IncludeLaunchDescription(
    # PythonLaunchDescriptionSource(os.path.join(
    #     get_package_share_directory("opennav_coverage_demo"),
    #     "test_complete_launch.py"
    # )),
    # condition=IfCondition(use_opennav)
    # )
    
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

    cleaning = Node(
        package="psolar_localization",
        executable="cleaning_launcher",
        output="screen",
        parameters=[{"use_sim_time": True}],
    )

    battery_sim = Node(
        package="psolar_bringup",
        executable="battery_simulation.py",
        output="screen",
        parameters=[{"use_sim_time": True}],
    )

    
        # Path to your localization package where the config is
    psolar_localization_pkg = get_package_share_directory("psolar_localization")

    # --- Twist Mux Launch ---
    twist_mux_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory("twist_mux"), "launch", "twist_mux_launch.py")
        ),
        launch_arguments={
            # Set the final output topic for your robot controller
            "cmd_vel_out": "cmd_vel",
            # Point to the YAML file you just created
            "config_topics": os.path.join(psolar_localization_pkg, "config", "twist_mux.yaml"),
            # You can omit locks and joy if you aren't using them by providing an empty string
            # or a path to an empty file.
            "config_locks": "", # Set to empty if you have no locks
            "use_sim_time": LaunchConfiguration("use_sim_time"),
        }.items(),
    )

            






   
    return LaunchDescription([
        use_opennav_arg,
        use_sim_time_arg,
        gazebo,
        rviz,
        localization,
        twist_mux_launch,
        odom_clone,
        frames_transform,
        cleaning,
        battery_sim,

    ])
