import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, GroupAction
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from nav2_common.launch import RewrittenYaml

def generate_launch_description():
    # Parameters file
    bringup_dir = get_package_share_directory('solbot_navigation')
    default_params_file = os.path.join(bringup_dir, 'config', 'custom_cpp_params.yaml')
    params_file = LaunchConfiguration('params_file', default=default_params_file)

    # Settings
    use_sim_time = True
    autostart = True

    # Remappings
    remappings = [
        ('cmd_vel', '/go_to_pose/cmd_vel'),
        ('cmd_vel_smoothed', '/cmd_vel/nav')
    ]

    map_path = PathJoinSubstitution([
        get_package_share_directory("solbot_navigation"),
        "maps",
        "cleaning_5x5.yaml"
    ])

    # Parameter substitutions
    param_substitutions = {
        'use_sim_time': str(use_sim_time),
        'autostart': str(autostart)
    }

    # No namespace
    configured_params = RewrittenYaml(
        source_file=params_file,
        root_key='',  
        param_rewrites=param_substitutions,
        convert_types=True
    )

    # Environment
    stdout_linebuf_envvar = SetEnvironmentVariable('RCUTILS_LOGGING_BUFFERED_STREAM', '1')

    # Declare launch argument
    declare_params_file_cmd = DeclareLaunchArgument(
        'params_file',
        default_value=default_params_file,
        description='Full path to the ROS2 parameters file to use'
    )

    # Launch nodes without namespace
    bringup_nodes = GroupAction([
        Node(
            package='nav2_controller',
            executable='controller_server',
            name='controller_server',
            parameters=[configured_params],
            remappings=remappings,
            output='screen'
        ),
        Node(
            package='nav2_planner',
            executable='planner_server',
            name='planner_server',
            parameters=[configured_params],
            remappings=remappings,
            output='screen'
        ),
        Node(
            package='nav2_behaviors',
            executable='behavior_server',
            name='behavior_server',
            parameters=[configured_params],
            remappings=remappings,
            output='screen'
        ),
        Node(
            package='backported_bt_navigator',
            executable='bt_navigator',
            name='bt_navigator',
            parameters=[configured_params],
            remappings=remappings,
            output='screen'
        ),
        Node(
            package="nav2_map_server",
            executable="map_server",
            name="map_server",
            output="screen",
            parameters=[
                {"yaml_filename": map_path},
                {"use_sim_time": use_sim_time}
            ],
        ),
        # Lifecycle manager
        Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_navigation',
            parameters=[{
                'use_sim_time': use_sim_time,
                'autostart': autostart,
                'node_names': [
                    'controller_server',
                    'planner_server',
                    'behavior_server',
                    'bt_navigator',
                    # 'map_server' 
                ]
            }],
            output='screen'
        )
    ])

    # Build launch description
    ld = LaunchDescription()
    ld.add_action(stdout_linebuf_envvar)
    ld.add_action(declare_params_file_cmd)
    ld.add_action(bringup_nodes)

    return ld
