#include "rclcpp/rclcpp.hpp"

class PersonNode: public rclcpp::Node {

public:
    PersonNode(const std::string &node_name, const std::string &name, const int &age): Node(node_name) {
        //RCLCPP_INFO(this->get_logger(), "Hello, c++ pkg node! I'm a c++ node.");
        this->name = name;
        this->age = age;
    }

    void eat(const std::string &food_name) {
        RCLCPP_INFO(this->get_logger(), "Name: %s, Age: %d, like eat %s", this->name.c_str(), this->age, food_name.c_str());
    }


private:
    std::string name;
    int age;

};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PersonNode>("person_node", "Tom", 20);
    node->eat("apple");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}