#pragma once
#include "Component.h"

namespace Engine {

struct Transform : public Component
{
    float x = 0;
    float y = 0;
    float rotation = 0;
};

}
