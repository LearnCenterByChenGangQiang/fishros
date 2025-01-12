#include <QApplication>
#include <QTimer>
#include "sys_status_display.hpp"

SysStatusDisplay::SysStatusDisplay(QLabel* label)
: QObject(), rclcpp::Node("sys_status_display"), label_(label)
{
    subscription_ = this->create_subscription<SystemStatus>(
        "sys_status", 10, 
        std::bind(&SysStatusDisplay::topic_callback, this, std::placeholders::_1));
    
    label_->setText(get_qstr_from_msg(std::make_shared<SystemStatus>()));
    label_->show();
}

void SysStatusDisplay::topic_callback(const SystemStatus::SharedPtr msg)
{
    // Emit the signal to update the label in the main Qt thread
    Q_EMIT updateLabel(get_qstr_from_msg(msg));
}

QString SysStatusDisplay::get_qstr_from_msg(const SystemStatus::SharedPtr msg)
{
    std::stringstream show_str;
    show_str 
        << "======== 新提供状态可视化显示工具 ========\n"
        << "数据时间:\t" << msg->stamp.sec << "\ts\n"
        << "主机名称:\t" << msg->host_name << "\t\n"
        << "CPU 使用率:\t" << msg->cpu_percent << "\t%\n"
        << "内存使用率:\t" << msg->memory_percent << "\t%\n"
        << "内存总大小:\t" << msg->memory_total << "\tMB\n"
        << "剩余有效内存:\t" << msg->memory_available << "\tMB\n"
        << "网络发送量:\t" << msg->net_sent << "\tMB\n"
        << "网络接收量:\t" << msg->net_recv << "\tMB\n";
    return QString::fromStdString(show_str.str());
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    QApplication app(argc, argv);
    
    // Create the label in the main Qt thread
    QLabel* label = new QLabel();
    auto node = std::make_shared<SysStatusDisplay>(label);
    
    // Connect the signal to the label's setText slot
    QObject::connect(node.get(), &SysStatusDisplay::updateLabel,
                    label, &QLabel::setText,
                    Qt::QueuedConnection);

    // Create a timer to process ROS events
    QTimer* timer = new QTimer();
    QObject::connect(timer, &QTimer::timeout, [&]() {
        rclcpp::spin_some(node);
    });
    timer->start(100);  // Process ROS events every 100ms

    return app.exec();
}
 
