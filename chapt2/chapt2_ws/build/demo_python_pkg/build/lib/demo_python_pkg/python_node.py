import rclpy
from rclpy.node import Node

def main():
    rclpy.init()
    node = Node('python_node')
    node.get_logger().info('Hello, python pkg node! It is working!')
    rclpy.spin(node)
    rclpy.shutdown()