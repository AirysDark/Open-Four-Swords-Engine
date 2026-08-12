#pragma once

#include <string>

namespace Engine::Network {

class MatchmakingClient
{
public:
    bool connect(const std::string& serverAddress);
    bool createLobby(const std::string& name);
    bool findLobby(const std::string& code);

private:
    bool connected = false;
};

}
