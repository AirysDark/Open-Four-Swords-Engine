#pragma once

#include "GameState.h"
#include <memory>

namespace OFSE {

class GameStateManager
{
public:
    void changeState(std::unique_ptr<GameState> state);
    void update(float deltaTime);

private:
    std::unique_ptr<GameState> currentState;
};

}
