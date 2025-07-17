# Snake Game - Development Log(only Logic)

This markdown work done to track on the Snake Game project using C++ and OOP.

---

## Completed Tasks

### Project Setup
- [x] Set up folder structure: `src/`, `include/`
- [x] Initialized Git repository
- [x] working on just one branch `logic` for minimizing conflicts


### Classes Created
- [x] `Point` class (`Point.h`, `Point.cpp`)
  - Represents `(x, y)` positions on the board
- [x] `Snake` class (`Snake.h`, `Snake.cpp`)
  - Handles movement, growing, direction change, collision detection and other logic will be written here
- [x] `Food` class (`Food.h`, `Food.cpp`)
  - Handles random food spawning and position

### Testing
- [x] Created `main.cpp` for testing Snake and Food logic and Test1 unit
- [x] Confirmed snake movement, growth, and food spawning through cout function

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

##  Next Steps

- [ ] Add collision detection with food
- [ ] Add a `Game` class to handle loop, rendering, and input
- [ ] Replace `main.cpp` with full game logic
- [ ] Create `Board` class to manage boundaries
- [ ] Implement terminal-based drawing or use external library

---

## Useful Commands

```bash
# Compile from project root
g++ src/*.cpp -Iinclude -o main(udf)
./main(or name of the files created)
