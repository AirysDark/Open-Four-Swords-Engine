#pragma once

#include <string>
#include <vector>

namespace Engine::Network {

struct LobbyInfo
{
    std::string name;
    std::string address;
    unsigned short port;
    int players;
};

class PeerDiscovery
{
public:
    void startLANDiscovery();
    void stopLANDiscovery();

    std::vector<LobbyInfo> getAvailableLobbies();
};

}
