from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import LoadComposableNodes, Node
from launch_ros.descriptions import ComposableNode, ParameterFile
from nav2_common.launch import RewrittenYaml

def generate_launch_description():
    params_file = LaunchConfiguration('params_file')

    remappings = [('/tf', 'tf'),
                  ('/tf_static', 'tf_static')]

    use_sim_time = True
    param_substitutions = {
        'use_sim_time': str(use_sim_time),
    }
    # Lifecycle nodes to manage
    lifecycle_nodes = ['coverage_server']

    configured_params = ParameterFile(
        RewrittenYaml(
            source_file=params_file,
            root_key='',
            param_rewrites=param_substitutions,
            convert_types=True),
        allow_substs=True)

    stdout_linebuf_envvar = SetEnvironmentVariable(
        'RCUTILS_LOGGING_BUFFERED_STREAM', '1')

    declare_params_file_cmd = DeclareLaunchArgument(
        'params_file',
        default_value='/home/manel/turtlebot3_ws/src/opennav_coverage/opennav_coverage_demo/params/test_params.yaml',
        description='Full path to param file to load')

    # Create component container node to load coverage server
    create_container = Node(
        name='coverage_container',
        package='rclcpp_components',
        executable='component_container_isolated',
        parameters=[configured_params],
        remappings=remappings,
        output='screen')

    # Load only coverage_server composable node into container
    load_coverage_server = LoadComposableNodes(
        target_container='coverage_container',
        composable_node_descriptions=[
            ComposableNode(
                package='opennav_coverage',
                plugin='opennav_coverage::CoverageServer',
                name='coverage_server',
                parameters=[configured_params],
                remappings=remappings)
        ],
    )

    lifecycle_manager_node = Node(
    package='nav2_lifecycle_manager',
    executable='lifecycle_manager',
    name='lifecycle_manager_coverage',
    output='screen',
    parameters=[{
        'use_sim_time': use_sim_time,
        'autostart': True,
        'node_names': lifecycle_nodes
    }]
    )

    ld = LaunchDescription()
    ld.add_action(stdout_linebuf_envvar)
    ld.add_action(declare_params_file_cmd)
    ld.add_action(create_container)
    ld.add_action(load_coverage_server)
    ld.add_action(lifecycle_manager_node)
    return ld
