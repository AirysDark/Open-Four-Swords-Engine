# Hub World Design

The engine uses a custom hub world system.

The hub is not based on Zelda maps or original room formats.

Purpose:
- player gathering area
- dungeon selection
- multiplayer lobby location
- future NPC and upgrade systems

Dungeon entries are abstract IDs. Actual dungeon implementations are separate from the hub.

Flow:

Hub World -> Select Dungeon -> Create World Session -> Start Gameplay
