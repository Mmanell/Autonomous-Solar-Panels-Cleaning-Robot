import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.substitutions import PathJoinSubstitution

def generate_launch_description():
    
    use_sim_time = LaunchConfiguration("use_sim_time")
    pkg_share = get_package_share_directory("solbot_localization")

    use_sim_time_arg=DeclareLaunchArgument(
        "use_sim_time",
        default_value="true",
        description="Use simulation (Gazebo) clock if true"
    )



    ekf_filter_node_odom=Node(
        package="robot_localization",
        executable="ekf_node", 
        name="ekf_filter_node_odom",           
        output="screen",
        parameters=[os.path.join(pkg_share,
                                      "config", 
                                      "local_ekf_params_2d.yaml"),
                         {"use_sim_time": use_sim_time}],
        remappings=[("odometry/filtered", "odometry/local")]
        )
    ekf_filter_node_map=Node(
        package="robot_localization",
        executable="ekf_node",
        name="ekf_filter_node_map",
        output="screen",
        parameters=[os.path.join(pkg_share, 
                                    "config", 
                                    "global_ekf_params_2d.yaml"), 
                    {"use_sim_time": use_sim_time}],
        remappings=[("odometry/filtered", "odometry/global")]
       )

    navsat_transform= Node(
        package="robot_localization",
        executable="navsat_transform_node",
        name="navsat_transform",
        output="screen",
        parameters=[os.path.join(pkg_share, 
                                    "config",
                                    "navsat_params_2d.yaml"), 
                    {"use_sim_time": use_sim_time}],
        remappings=[
               ("imu/data", "imu"),
               ("gps/fix", "navsat"),
               ("odometry/filtered", "odometry/global"),
               ("gps/filtered", "gps/filtered"),
               ("odometry/gps", "odometry/gps"),              
           ]
       )
    

        
    return LaunchDescription([
            use_sim_time_arg,
            ekf_filter_node_odom,
            ekf_filter_node_map,
            navsat_transform,
            
    ])
