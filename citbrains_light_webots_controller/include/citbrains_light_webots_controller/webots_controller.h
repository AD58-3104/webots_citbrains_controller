#include <webots/Robot.h>
#include <webots/Supervisor.hpp>
#include "controllmessage.pb.h"

#include <string>
//通信部分はmain関数にros2使ってベタ書き。このクラスはros2とは分離したい
class LightController
{
public:
    bool step();
    //オブジェクトの位置と向きを取得し、それからprotoメッセージを構築してシリアライズ済みのバイト列を返す
    std::string getAllObjectPosition();

private:
    std::vector webots_robot_players_;
    int32_t timestep_;
    struct ObjectPosition
    {
        int32_t x;
        int32_t y;
        int32_t type;
        int32_t robot_id;
        std::pair<int32_t, int32_t> direction;
    };
    ObjectPosition getBallPosition();
    ObjectPosition getRobotPositions();
};
