#pragma once

#include <vector>
#include <string>

namespace OFSE {

struct DungeonEntry
{
    int id;
    std::string name;
    bool unlocked;
};

class HubWorld
{
public:
    void initialize();
    const std::vector<DungeonEntry>& getDungeons() const;
    bool selectDungeon(int id);

private:
    std::vector<DungeonEntry> dungeons;
    int selectedDungeon = -1;
};

}
