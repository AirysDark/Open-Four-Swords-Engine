#pragma once

#include <string>

namespace OFSE {

struct Event
{
    std::string type;
    int source = 0;
    int target = 0;
};

}
