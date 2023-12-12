from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    config = os.path.join(
        get_package_share_directory('lab02_pkg_test'),
        'config',
        'parameters.yaml'
    )
    return LaunchDescription([
        Node(
            package='lab02_pkg_test',
            executable='compute_trajectory',
            name='compute_trajectory'
        ),
        Node(
            package='turtlesim',
            namespace='',
            executable='turtlesim_node',
            name='turtlesim_node',
            parameters=[config]
        ),
        ExecuteProcess(
            cmd=['xterm', '-e', 'ros2 run turtlesim turtle_teleop_key'],
            output='screen'
        )
    ])
