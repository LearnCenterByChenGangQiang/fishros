import rclpy
from rclpy.node import Node
from chapt4_interfaces.srv import FaceDetector
import cv2
import face_recognition
from ament_index_python.packages import get_package_share_directory
import os
from cv_bridge import CvBridge
import time
from rcl_interfaces.srv import SetParameters
from rcl_interfaces.msg import Parameter, ParameterValue, ParameterType


class FaceDetectClientNode(Node):
    def __init__(self):
        super().__init__('face_detect_client_node')
        self.bridge = CvBridge()
        self.default_image_path = os.path.join(get_package_share_directory('demo_python_service'), 'resource/test1.jpg')
        self.get_logger().info("人脸检测客户端已启动")
        self.client = self.create_client(FaceDetector, 'face_detect')
        self.image = cv2.imread(self.default_image_path)
    
    def call_set_parameters(self, parameters):
        """
        设置参数
        """
        # 1. 创建客户端，等待服务启动
        update_param = self.create_client(SetParameters, '/face_detect_node/set_parameters')
        while update_param.wait_for_service(timeout_sec=1.0) is False:
            self.get_logger().info('等待服务启动')
        # 2. 创建请求
        request = SetParameters.Request()
        request.parameters = parameters
        # 3. 发送请求
        future = update_param.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        response = future.result()
        return response
    
    def update_detect_model(self, model="hog"):
        """
        更新模型
        """
        # 1. 创建参数
        param = Parameter()
        param.name = "model"
        # 2. 设置参数值
        param_value = ParameterValue()
        param_value.string_value = model
        param_value.type = ParameterType.PARAMETER_STRING
        param.value = param_value
        # 3. 
        response = self.call_set_parameters([param])
        for result in response.results:
            self.get_logger().info(f"{result.successful} -> {result.reason}")


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
            #self.show_response(response)
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
    node.update_detect_model("cnn")
    node.send_request()
    node.update_detect_model("hog")
    node.send_request()
    rclpy.spin(node)
    rclpy.shutdown()