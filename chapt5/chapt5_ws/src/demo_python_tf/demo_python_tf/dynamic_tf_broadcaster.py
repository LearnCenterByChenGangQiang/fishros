import rclpy
from rclpy.node import Node
from tf2_ros import TransformBroadcaster          # 坐标发布器
from geometry_msgs.msg import TransformStamped          # 消息接口
from tf_transformations import quaternion_from_euler    # 欧拉角转四元数
import math # 角度转弧度

class TfBroadcaster(Node):
    def __init__(self):
        super().__init__('tf_broadcaster')
        self.broadcaster = TransformBroadcaster(self)
        self.timer = self.create_timer(0.01, self.publish_tf)
    
    def publish_tf(self):
        transform = TransformStamped()
        transform.header.frame_id = 'camera_link'
        transform.child_frame_id = 'bottle_link'
        transform.header.stamp = self.get_clock().now().to_msg()

        transform.transform.translation.x = 0.2
        transform.transform.translation.y = 0.3
        transform.transform.translation.z = 0.5

        q = quaternion_from_euler(math.radians(0), math.radians(0), math.radians(0))
        transform.transform.rotation.x = q[0]
        transform.transform.rotation.y = q[1]
        transform.transform.rotation.z = q[2]
        transform.transform.rotation.w = q[3]

        self.broadcaster.sendTransform(transform)
        self.get_logger().info(f'发布TF:{transform}')


def main():
    rclpy.init()
    static_tf_broadcaster = TfBroadcaster()
    rclpy.spin(static_tf_broadcaster)
    rclpy.shutdown()
