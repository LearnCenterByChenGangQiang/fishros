#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <chrono>
#include <functional>
#include <string>

using namespace std::chrono_literals;

class TurtleCircleNode : public rclcpp::Node
{
private:
    // 发布者
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    //
    rclcpp::TimerBase::SharedPtr timer_;
public:
    // 构造函数
    explicit TurtleCircleNode(const std::string  &node_name): Node(node_name)
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        timer_ = this->create_wall_timer(1000ms, std::bind(&TurtleCircleNode::timer_callback, this));

    }
    void timer_callback()
    {
        auto msg = geometry_msgs::msg::Twist();
        msg.linear.x = 1.0;
        msg.angular.z = 1.0;
        publisher_->publish(msg);

    }

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TurtleCircleNode>("turtle_circle");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}