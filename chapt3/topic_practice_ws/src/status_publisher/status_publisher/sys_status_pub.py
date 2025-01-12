import rclpy
from rclpy.node import Node
from status_interfaces.msg import SystemStatus
import psutil
import platform

class SysStatusPub(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.status_publisher = self.create_publisher(SystemStatus, 'sys_status', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        cpu_percent = psutil.cpu_percent()
        memory_info = psutil.virtual_memory()
        net_io_counters = psutil.net_io_counters()

        msg = SystemStatus()
        msg.stamp = self.get_clock().now().to_msg()
        msg.host_name = platform.node()
        msg.cpu_percent = cpu_percent
        msg.memory_total = memory_info.total / 1024 / 1024
        msg.memory_available = memory_info.available / 1024 / 1024
        msg.memory_percent = memory_info.percent
        msg.net_sent = net_io_counters.bytes_sent / 1024 / 1024
        msg.net_recv = net_io_counters.bytes_recv / 1024 / 1024

        self.get_logger().info(f"Publishing: {str(msg)}")
        self.status_publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = SysStatusPub('sys_status_pub')
    rclpy.spin(node)
    rclpy.shutdown()    