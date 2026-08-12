# Zelda3 Core Integration

## Purpose

Open Four Swords Engine uses the Zelda3 project as a technical gameplay foundation.

Reference:
https://github.com/snesrev/zelda3

The Zelda3 code is not converted directly into Four Swords. It provides a reference implementation for:

- world handling
- room loading
- entities
- collision
- combat logic
- sprite systems

## Architecture

```
zelda3-core
     |
     v
engine/adapters
     |
     v
Open Four Swords Engine
```

Future work will wrap Zelda3 systems with new multiplayer-aware systems.
