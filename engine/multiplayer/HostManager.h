#pragma once

namespace Engine::Network {

struct NetworkScore
{
    float latency = 0;
    float uploadSpeed = 0;
    float packetLoss = 0;
    float cpuScore = 0;
};

class HostManager
{
public:
    float calculateHostScore(const NetworkScore& score);
    bool shouldBecomeHost(const NetworkScore& local, const NetworkScore& other);
};

}
