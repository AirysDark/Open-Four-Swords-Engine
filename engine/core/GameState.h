#pragma once

namespace OFSE {

enum class GameStateType
{
    Hub,
    Dungeon,
    Loading
};

class GameState
{
public:
    virtual ~GameState() = default;
    virtual void update(float deltaTime) = 0;
};

}
