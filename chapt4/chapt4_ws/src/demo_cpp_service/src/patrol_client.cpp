#include "rclcpp/rclcpp.hpp"
#include "chapt4_interfaces/srv/patrol.hpp"
#include <chrono>
#include <ctime>
#include "rcl_interfaces/msg/parameter.hpp"
#include "rcl_interfaces/msg/parameter_value.hpp"
#include "rcl_interfaces/msg/parameter_type.hpp"
#include "rcl_interfaces/srv/set_parameters.hpp"

using SetP = rcl_interfaces::srv::SetParameters;
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

    SetP::Response::SharedPtr call_set_parameter(const rcl_interfaces::msg::Parameter &param)
    {
        auto param_client = this->create_client<SetP>("/turtle_controller/set_parameters");
        while ((!param_client->wait_for_service(1s)))
        {
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(this->get_logger(), "被中断");
                return nullptr;
            }
            RCLCPP_INFO(this->get_logger(), "等待服务中...");
        }
        auto request = std::make_shared<SetP::Request>();
        request->parameters.push_back(param);
        auto furture = param_client->async_send_request(request);
        rclcpp::spin_until_future_complete(this->get_node_base_interface(), furture);
        auto response = furture.get();
        return response;
        
    }

    void update_server_param_k(double k)
    {
        auto param = rcl_interfaces::msg::Parameter();
        param.name = "k";
        auto param_value = rcl_interfaces::msg::ParameterValue();
        param_value.type = rcl_interfaces::msg::ParameterType::PARAMETER_DOUBLE;
        param_value.double_value = k;
        param.value = param_value;
        auto response = call_set_parameter(param);
        if(response==NULL)
        {
            RCLCPP_ERROR(this->get_logger(), "更新参数失败");
            return;
        }
        for(auto result : response->results)
        {
            if(result.successful)
            {
                RCLCPP_INFO(this->get_logger(), "更新参数成功");
            }
            else
            {
                RCLCPP_ERROR(this->get_logger(), "更新参数失败, 原因: %s", result.reason.c_str());
            }
        }


    }


};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PatrolClient>("patrol_client");
    node->update_server_param_k(4.0);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}