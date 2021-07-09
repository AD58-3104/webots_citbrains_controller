#include <webots/Motor.hpp>
#include <webots/Robot.hpp>
#include <webots/Accelerometer.hpp>
#include <webots/Gyro.hpp>
#include <webots/Keyboard.hpp>
#include <webots/Camera.hpp>
#include <cmath>
#include <set>
#include <exception>
#include <cstdint>
#include <tuple>
#include <cstdint>
#include <string>
#include "controllmessage.pb.h"

class Player{
    public:
    //controllerクラスでメッセージとして受け取ったbyte列をパースしてデータをセットする.stringはperfect forwardしたい
    void parseAndSetMessageFromByteSequence(std::string&& bytes);
    
    private:
    int32_t robot_id_;
    //関節角のセット.
    void setMotorAngles();
    
    
};