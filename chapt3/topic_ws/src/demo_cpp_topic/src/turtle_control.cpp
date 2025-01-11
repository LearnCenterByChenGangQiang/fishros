#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <chrono>
#include <functional>
#include <string>
#include "turtlesim/msg/pose.hpp"

using namespace std::chrono_literals;

class TurtleControlNode : public rclcpp::Node
{
private:
    // 发布者
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    // 订阅者
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_;

    double target_x_{1.0};
    double target_y_{1.0};
    double k_{1.0};
    double max_speed_{3.0};

public:
    // 构造函数
    explicit TurtleControlNode(const std::string  &node_name): Node(node_name)
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        subscriber_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&TurtleControlNode::on_pose_received, this, std::placeholders::_1));


    }
    void on_pose_received(const turtlesim::msg::Pose::SharedPtr pose)
    {
        //1. 获取当前位置
        auto current_x = pose->x;
        auto current_y = pose->y;
        RCLCPP_INFO(this->get_logger(), "当前: x=%f, y=%f", current_x, current_y);
        //2. 计算距离
        auto distance = sqrt(
            (target_x_ - current_x) * (target_x_ - current_x) +
            (target_y_ - current_y) * (target_y_ - current_y)
        );
        auto angle = atan2(target_y_ - current_y, target_x_ - current_x) - pose->theta;
        //3. 控制策略
        auto msg = geometry_msgs::msg::Twist();
        if(distance > 0.1)
        {
            if(fabs(angle) > 0.2)
            {
                msg.angular.z = fabs(angle);
            }
            else
            {
                msg.linear.x = k_ * distance;
            }
        }
        // 4. 限速
        if(msg.linear.x > max_speed_)
        {
            msg.linear.x = max_speed_;
        }

        //5. 发布消息
        publisher_->publish(msg);


    }

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TurtleControlNode>("turtle_control");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}