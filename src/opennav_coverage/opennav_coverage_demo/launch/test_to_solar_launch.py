from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterFile
from nav2_common.launch import RewrittenYaml
from launch.actions import TimerAction


def generate_launch_description():
    params_file = LaunchConfiguration('params_file')
    use_sim_time = True
    namespace = 'goto_pose'  # <-- namespace for this stack

    stdout_linebuf_envvar = SetEnvironmentVariable(
        'RCUTILS_LOGGING_BUFFERED_STREAM', '1'
    )
    configured_params = RewrittenYaml(
        source_file=params_file,
        root_key=namespace,
        param_rewrites={},  # <-- required, can be empty
        convert_types=True
    )

    configured_params_2 = RewrittenYaml(
        source_file=params_file,
        param_rewrites={},  # <-- required, can be empty
        convert_types=True
    )


    ld = LaunchDescription()
    ld.add_action(stdout_linebuf_envvar)
    ld.add_action(DeclareLaunchArgument('params_file'))

    remappings = [
        ('cmd_vel', '/cmd_vel/go_to_pose'),         # GoToPose output velocity to robot
    ]



    # Panel-to-panel nodes
    ld.add_action(Node(
        package='nav2_controller',
        executable='controller_server',
        name='controller_server',
        namespace=namespace,
        parameters=[{'use_sim_time': use_sim_time}, configured_params],
        remappings=remappings,
        output='screen'
    ))
    ld.add_action(Node(
        package='nav2_planner',
        executable='planner_server',
        name='planner_server',
        namespace=namespace,
        parameters=[{'use_sim_time': use_sim_time}, configured_params],
        remappings=remappings,
        output='screen'
    ))
    ld.add_action(Node(
        package='nav2_behaviors',
        executable='behavior_server',
        name='behavior_server',
        namespace=namespace,
        parameters=[{'use_sim_time': use_sim_time}, configured_params],
        remappings=remappings,
        output='screen'
    ))
    ld.add_action(Node(
        package='backported_bt_navigator',
        executable='bt_navigator',
        name='bt_navigator',
        namespace=namespace,
        parameters=[{'use_sim_time': use_sim_time}, configured_params],
        remappings=remappings,
        output='screen'
    ))
    ld.add_action(Node(
        package='opennav_docking',
        executable='opennav_docking',
        name='docking_server',
        namespace=namespace,
        parameters=[{'use_sim_time': use_sim_time}, configured_params],
        remappings=remappings,
        output='screen'
    ))
    
   
    # ld.add_action(TimerAction(
    # period=2.0,  # 2 seconds should be enough
    # actions=[Node(
    #     package='nav2_lifecycle_manager',
    #     executable='lifecycle_manager',
    #     name='lifecycle_manager_navigation',
    #     parameters=[{
    #         'use_sim_time': use_sim_time,
    #         'bond_timeout': 10.0 ,
    #         'autostart': True,
    #         'node_names': [
    #             '/goto_pose/planner_server',
    #             '/goto_pose/controller_server',
    #             '/goto_pose/behavior_server',
    #             '/goto_pose/bt_navigator'
    #         ]
    #     }],
    #     output='screen'
    # )]
    # ))

    return ld 