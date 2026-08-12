#pragma once

#include "../core/GameState.h"
#include <vector>
#include <string>

namespace OFSE {

struct DungeonEntry
{
    std::string name;
    int id;
};

class HubState : public GameState
{
public:
    HubState();

    void update(float deltaTime) override;

    void selectDungeon(int index);
    int getSelectedDungeon() const;

private:
    std::vector<DungeonEntry> dungeons;
    int selectedDungeon;
};

}
