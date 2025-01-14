import rclpy
from rclpy.node import Node
from tf2_ros import StaticTransformBroadcaster          # 静态坐标发布器
from geometry_msgs.msg import TransformStamped          # 消息接口
from tf_transformations import quaternion_from_euler    # 欧拉角转四元数
import math # 角度转弧度

class StaticTfBroadcaster(Node):
    def __init__(self):
        super().__init__('static_tf_broadcaster')
        self.static_broadcaster = StaticTransformBroadcaster(self)
        self.publish_static_tf()
    
    def publish_static_tf(self):
        transform = TransformStamped()
        transform.header.frame_id = 'base_link'
        transform.child_frame_id = 'camera_link'
        transform.header.stamp = self.get_clock().now().to_msg()

        transform.transform.translation.x = 0.5
        transform.transform.translation.y = 0.3
        transform.transform.translation.z = 0.6

        q = quaternion_from_euler(math.radians(90), math.radians(0), math.radians(0))
        transform.transform.rotation.x = q[0]
        transform.transform.rotation.y = q[1]
        transform.transform.rotation.z = q[2]
        transform.transform.rotation.w = q[3]

        self.static_broadcaster.sendTransform(transform)
        self.get_logger().info(f'发布静态TF:{transform}')


def main():
    rclpy.init()
    static_tf_broadcaster = StaticTfBroadcaster()
    rclpy.spin(static_tf_broadcaster)
    rclpy.shutdown()

