#include <rclcpp/rclcpp.hpp>
#include <memory>
#include "webots_controller.h"

int main(int argc, const char** argv) {
    rclcpp::init(argc,argv);
    rclcpp::shutdown();
    return 0;
}