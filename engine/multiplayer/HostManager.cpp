#include "HostManager.h"

namespace Engine::Network {

float HostManager::calculateHostScore(const NetworkScore& score)
{
    return (score.uploadSpeed * 0.4f) -
           (score.latency * 0.4f) -
           (score.packetLoss * 0.15f) +
           (score.cpuScore * 0.05f);
}

bool HostManager::shouldBecomeHost(const NetworkScore& local,
                                   const NetworkScore& other)
{
    return calculateHostScore(local) > calculateHostScore(other);
}

}
