import rclpy
from rclpy.node import Node
from tf2_ros import TransformListener, Buffer          # 坐标监听器
from tf_transformations import euler_from_quaternion    # 四元数转欧拉角
import math # 角度转弧度

class TfBroadcaster(Node):
    def __init__(self):
        super().__init__('tf_broadcaster')
        self.buffer = Buffer()
        self.listener = TransformListener(self.buffer, self)
        self.timer = self.create_timer(1.0, self.get_transform)
    
    def get_transform(self):
        try:
            result = self.buffer.lookup_transform('base_link', 'bottle_link', 
                                                  rclpy.time.Time(seconds=0), 
                                                  rclpy.duration.Duration(seconds=1.0))
            transform = result.transform
            self.get_logger().info(f'平移:{transform.translation}')
            self.get_logger().info(f'旋转:{transform.rotation}')
            rotation_euler = euler_from_quaternion([transform.rotation.x, 
                                                    transform.rotation.y, 
                                                    transform.rotation.z, 
                                                    transform.rotation.w])
            self.get_logger().info(f'旋转RPY:{rotation_euler}')


        except Exception as e:
            self.get_logger().error(f'获取TF失败:{e}')

def main():
    rclpy.init()
    static_tf_broadcaster = TfBroadcaster()
    rclpy.spin(static_tf_broadcaster)
    rclpy.shutdown()

