#pragma once

namespace Engine {

class Entity
{
public:
    Entity();
    virtual ~Entity() = default;

    int id;
};

}
