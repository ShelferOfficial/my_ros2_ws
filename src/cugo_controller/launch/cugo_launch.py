from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="cugo_controller",
            namespace="cugo_controller",
            executable="cugo_controller",
            output="screen",
            ),
        Node(
            package="cugo_controller",
            namespace="cugo_controller",
            executable="ps4_publisher",
            ),
        Node(
            package="cugo_controller",
            namespace="cugo_controller",
            executable="ultrasonic_client",
            ),
        ])
