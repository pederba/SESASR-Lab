from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    config = LaunchConfiguration('config', default=[get_package_share_directory('lab03_pkg'), '/config/controller_params.yaml'])

    return LaunchDescription([
        DeclareLaunchArgument(
            'config',
            default_value=config,
        ),
        Node(
            package='lab03_pkg',
            executable='controller',
            name='controller',
            output='screen',
            parameters=[config]
        ),
    ])