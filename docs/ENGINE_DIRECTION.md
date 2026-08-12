# Engine Direction

Open Four Swords Engine uses Zelda3 as a technical foundation reference only.

The goal is not to recreate maps or copy the original game structure.

## Current Focus

Build a new engine architecture:

- game loop
- entity processing
- gameplay logic
- combat framework
- physics layer
- rendering abstraction
- input system

## Design Rules

- No Zelda3 map system dependency
- No original dungeon layout dependency
- No original room format dependency
- New world design
- New multiplayer architecture

Multiplayer will be designed separately around networked gameplay state instead of copying Four Swords implementation.
