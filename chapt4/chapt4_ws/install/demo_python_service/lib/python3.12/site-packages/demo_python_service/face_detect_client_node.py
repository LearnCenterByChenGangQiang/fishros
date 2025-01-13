import rclpy
from rclpy.node import Node
from chapt4_interfaces.srv import FaceDetector
import cv2
import face_recognition
from ament_index_python.packages import get_package_share_directory
import os
from cv_bridge import CvBridge
import time


class FaceDetectClientNode(Node):
    def __init__(self):
        super().__init__('face_detect_client_node')
        self.bridge = CvBridge()
        self.default_image_path = os.path.join(get_package_share_directory('demo_python_service'), 'resource/test1.jpg')
        self.get_logger().info("人脸检测客户端已启动")
        self.client = self.create_client(FaceDetector, 'face_detect')
        self.image = cv2.imread(self.default_image_path)

    def send_request(self):
        # 1. 判断服务是否启动
        if not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().error('服务未启动')
        # 2. 创建请求
        request = FaceDetector.Request()
        request.image = self.bridge.cv2_to_imgmsg(self.image)
        # 3. 发送请求
        future = self.client.call_async(request)
        #rclpy.spin_until_future_complete(self, future)
        def result_callback(result_future):
            response = result_future.result()
            self.get_logger().info(f"检测到{response.number}个人脸, 耗时{response.use_time:.2f}秒")
            self.show_response(response)
        future.add_done_callback(result_callback)


    def show_response(self, response):
        for i in range(response.number):
            top = response.top[i]
            right = response.right[i]
            bottom = response.bottom[i]
            left = response.left[i]
            cv2.rectangle(self.image, (left, top), (right, bottom), (0, 0, 255), 2)
        cv2.imshow('Face Detecte Result', self.image)
        cv2.waitKey(0)


def main():
    rclpy.init()
    node = FaceDetectClientNode()
    node.send_request()
    rclpy.spin(node)
    rclpy.shutdown()