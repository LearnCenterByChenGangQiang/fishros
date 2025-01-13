#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <chrono>
#include <functional>
#include <string>
#include "turtlesim/msg/pose.hpp"
#include "chapt4_interfaces/srv/patrol.hpp"
#include "rcl_interfaces/msg/set_parameters_result.hpp"

using Patrol = chapt4_interfaces::srv::Patrol;
using SetParametersResult = rcl_interfaces::msg::SetParametersResult;

using namespace std::chrono_literals;

class TurtleControlNode : public rclcpp::Node
{
private:
    OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
    rclcpp::Service<Patrol>::SharedPtr patrol_service_;
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
        // 读取参数
        this->declare_parameter("k", 1.0);
        this->declare_parameter("max_speed", 3.0);
        this->get_parameter("k", k_);
        this->get_parameter("max_speed", max_speed_);

        //this->set_parameter(rclcpp::Parameter("k", 2.0));

        parameter_callback_handle_ = this->add_on_set_parameters_callback(
            [&](const std::vector<rclcpp::Parameter> &parameters) -> SetParametersResult
            {
                auto result = SetParametersResult();
                result.successful = true;
                for(const auto &parameter : parameters)
                {
                    RCLCPP_INFO(this->get_logger(), "更新参数: %s=%f", parameter.get_name().c_str(), parameter.as_double());
                    if(parameter.get_name() == "k")
                    {
                        k_ = parameter.as_double();
                    }
                    else if(parameter.get_name() == "max_speed")
                    {
                        max_speed_ = parameter.as_double();
                    }
                    else
                    {
                        result.successful = false;
                        result.reason = "参数名不匹配";
                    }
                }
                return result;
            }
        );

        patrol_service_ = this->create_service<Patrol>("patrol", [&](const Patrol::Request::SharedPtr request, Patrol::Response::SharedPtr response)-> void 
        {
            if((0<request->target_x&&request->target_x<12.0f)&&(0<request->target_y&&request->target_y<12.0f))
            {
                target_x_ = request->target_x;
                target_y_ = request->target_y;
                response->result = Patrol::Response::SUCCESS;
            }
            else
            {
                response->result = Patrol::Response::FAIL;
            }

        });
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