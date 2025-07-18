# Snake Game - Development Log(only Logic)

This markdown work done to track on the Snake Game project using C++ and OOP.

---

## 👤 Developer Roles

| Role | Developer | Responsibility |
|------|-----------|----------------|
| Logic & Core Engine | Me | Snake movement, food collision, wall & self collision, test cases |
| Interface & Control | Darshan | Input handling, rendering game board, game loop integration |

## Completed Tasks

### 🔹 Core Classes
- [x] `Point` class for position representation
- [x] `Snake` class for movement, growth, collision
- [x] `Food` class for spawning and respawning
- [x] `Game` class for managing game state

### 🔹 Core Functions
- [x] `update()` to move snake and check food & collisions
- [x] `grow()` and `move()` logic
- [x] `checkSelfCollision()` implementation
- [x] Wall collision detection

### 🔹 Testing
- [x] Self-collision test (`testSelfCollision()`)
- [x] Manual growth and turning tests
- [x] Output verified via console logs

### Project Setup
- [x] Set up folder structure: `src/`, `include/`
- [x] Initialized Git repository
- [x] working on just one branch `logic` for minimizing conflicts

---

## Concepts Used (Explained)
-Too know what I am using
| Function / Feature           | Explanation                                                                 |
|-----------------------------|------------------------------------------------------------------------------|
| `std::vector`               | A dynamic array from STL used to store the snake’s body points              |
| `std::srand(std::time(nullptr))` | Seeds the random generator with current time to get different values every run |
| `std::rand()`               | Generates a random integer (e.g., for food position)                        |
| `body.insert(body.begin(), newHead)` | Inserts new head at the beginning of the vector                      |
| `body.pop_back()`           | Removes the last tail segment (unless growing)                              |
| `#ifndef`, `#define`, `#endif` | Header guards to prevent double-inclusion of header files               |
| `#include "..."` vs `<...>` | `"..."` is for local/project headers, `<...>` is for standard/system headers |
| `std::string`               | C++ standard class for text (used for snake direction)                      |

---

##  Pedning Tasks

- [ ] Implement `draw()` to render board in terminal
- [ ] Implement a `processInput()` for keyboard input(WASD/ Arrow keys)
- [ ] Create `run()` with full game logic
- [ ] Create `Board` class to manage boundaries
- [ ] Add a Game Over and Final Score 

---

## Useful Commands

```bash
# Compile from project root
g++ src/*.cpp -Iinclude -o main(udf)
./main(or name of the files created)
