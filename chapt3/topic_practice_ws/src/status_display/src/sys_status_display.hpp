#ifndef SYS_STATUS_DISPLAY_HPP
#define SYS_STATUS_DISPLAY_HPP

#include <QObject>
#include <QLabel>
#include <QString>
#include "rclcpp/rclcpp.hpp"
#include "status_interfaces/msg/system_status.hpp"

using SystemStatus = status_interfaces::msg::SystemStatus;

class SysStatusDisplay : public QObject, public rclcpp::Node
{
    Q_OBJECT
private:
    rclcpp::Subscription<SystemStatus>::SharedPtr subscription_;
    QLabel* label_;

public:
    SysStatusDisplay(QLabel* label);

private:
    void topic_callback(const SystemStatus::SharedPtr msg);
    QString get_qstr_from_msg(const SystemStatus::SharedPtr msg);

signals:
    void updateLabel(const QString& text);
};

#endif // SYS_STATUS_DISPLAY_HPP 