#pragma once

#include <vector>
#include "Entity.h"

namespace OFSE {

class EntityManager
{
public:
    void update(float deltaTime);
    void add(Entity* entity);

private:
    std::vector<Entity*> entities;
};

}
