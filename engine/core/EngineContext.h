#pragma once

namespace OFSE {

class EngineContext
{
public:
    void initialize();
    void update(float deltaTime);
    void shutdown();
};

}
