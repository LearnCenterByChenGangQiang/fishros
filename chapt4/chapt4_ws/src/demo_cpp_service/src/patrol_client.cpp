#include "rclcpp/rclcpp.hpp"
#include "chapt4_interfaces/srv/patrol.hpp"
#include <chrono>
#include <ctime>

using Patrol = chapt4_interfaces::srv::Patrol;
using namespace std::chrono_literals;

class PatrolClient : public rclcpp::Node
{
private:
    rclcpp::Client<Patrol>::SharedPtr client_;
    rclcpp::TimerBase::SharedPtr timer_;

public:
    // 构造函数
    explicit PatrolClient(const std::string  &node_name): Node(node_name)
    {
        srand((unsigned)time(NULL)); // 生成随机数种子
        client_ = this->create_client<Patrol>("patrol");
        timer_ = this->create_wall_timer(10s, [&]()-> void{
            // 1. 检测服务是否就绪
            while (!this->client_->wait_for_service(1s))
            {
                if (!rclcpp::ok())
                {
                    RCLCPP_ERROR(this->get_logger(), "被中断");
                    return;
                }
                RCLCPP_INFO(this->get_logger(), "等待服务中...");
                
            }   
            // 2. 构造请求对象
            auto request = std::make_shared<Patrol::Request>();
            request->target_x = rand() % 14;
            request->target_y = rand() % 14;
            RCLCPP_INFO(this->get_logger(), "请求目标点: x=%f, y=%f", request->target_x, request->target_y);
            // 3. 发送请求
            this->client_->async_send_request(request, [&](rclcpp::Client<Patrol>::SharedFuture result_future)-> void{
                auto response = result_future.get();
                if(response->result == Patrol::Response::SUCCESS)
                {
                    RCLCPP_INFO(this->get_logger(), "请求目标点成功");
                }
                if(response->result == Patrol::Response::FAIL)
                {
                    RCLCPP_INFO(this->get_logger(), "请求目标点失败");
                }
            });


        });

    }


};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PatrolClient>("patrol_client");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}