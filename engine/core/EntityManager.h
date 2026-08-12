#pragma once

#include <vector>
#include "Entity.h"

namespace OFSE {

class EntityManager
{
public:
    Entity* create();
    void destroy(Entity* entity);
    void update(float deltaTime);
    void add(Entity* entity);

private:
    int nextId = 1;
    std::vector<Entity*> entities;
};

}
