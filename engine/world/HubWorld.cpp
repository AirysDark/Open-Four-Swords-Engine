#include "HubWorld.h"

namespace OFSE {

void HubWorld::initialize()
{
    dungeons = {
        {0, "Dungeon 1", true},
        {1, "Dungeon 2", false},
        {2, "Dungeon 3", false},
        {3, "Dungeon 4", false}
    };
}

const std::vector<DungeonEntry>& HubWorld::getDungeons() const
{
    return dungeons;
}

bool HubWorld::selectDungeon(int id)
{
    for (const auto& dungeon : dungeons)
    {
        if (dungeon.id == id && dungeon.unlocked)
        {
            selectedDungeon = id;
            return true;
        }
    }

    return false;
}

}
