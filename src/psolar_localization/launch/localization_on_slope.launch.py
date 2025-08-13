import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    
    use_sim_time = LaunchConfiguration("use_sim_time")
    pkg_share = get_package_share_directory("psolar_localization")

    use_sim_time_arg=DeclareLaunchArgument(
        "use_sim_time",
        default_value="true",
        description="Use simulation (Gazebo) clock if true"
    )
    

    ekf_filter_node_odom=Node(
        package="robot_localization",
        executable="ekf_node",            
        output="screen",
        parameters=[os.path.join(pkg_share,
                                      "config", 
                                      "local_ekf_params_slope.yaml"),
                         {"use_sim_time": LaunchConfiguration("use_sim_time")}],
        remappings=[("odometry/filtered", "odometry/local/slope")]
        )
    ekf_filter_node_map=Node(
        package="robot_localization",
        executable="ekf_node",
        output="screen",
        parameters=[os.path.join(pkg_share, 
                                    "config", 
                                    "global_ekf_params_slope.yaml"), {"use_sim_time": LaunchConfiguration("use_sim_time")}],
        remappings=[("odometry/filtered", "odometry/global/slope")]
       )

    navsat_transform= Node(
        package="robot_localization",
        executable="navsat_transform_node",
        output="screen",
        parameters=[os.path.join(pkg_share, 
                                    "config",
                                    "navsat_params_slope.yaml"), {"use_sim_time": LaunchConfiguration("use_sim_time")}],
        remappings=[
               ("imu/data", "imu"),
               ("gps/fix", "navsat"),
               ("odometry/filtered", "odometry/global/slope"),
               ("gps/filtered", "gps/filtered/slope"),
               ("odometry/gps", "odometry/gps/slope"),              
           ]
       )
    
    gps_tilted_publisher=Node(
        package="psolar_localization",
        executable="gps_tilted_publisher",
        output="screen",
       )
    odom_tilted_publisher=Node(
        package="psolar_localization",
        executable="odom_tilted_publisher",
        output="screen",
       )
        
    return LaunchDescription([
            use_sim_time_arg,
            ekf_filter_node_odom,
            ekf_filter_node_map,
            gps_tilted_publisher,
            odom_tilted_publisher,
            navsat_transform,
    ])
