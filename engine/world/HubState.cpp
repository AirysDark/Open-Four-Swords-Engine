#include "HubState.h"

namespace OFSE {

HubState::HubState()
    : selectedDungeon(0)
{
    dungeons.push_back({"Dungeon 1", 0});
    dungeons.push_back({"Dungeon 2", 1});
    dungeons.push_back({"Dungeon 3", 2});
    dungeons.push_back({"Dungeon 4", 3});
}

void HubState::update(float deltaTime)
{
    // Hub world simulation
}

void HubState::selectDungeon(int index)
{
    if(index >= 0 && index < (int)dungeons.size())
        selectedDungeon = index;
}

int HubState::getSelectedDungeon() const
{
    return selectedDungeon;
}

}
