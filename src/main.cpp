#include <iostream>
#include "../include/snake.h"
#include "../include/food.h"

/** this was to test the game logics 
int main() {
    // Create a Snake starting this point
    Snake mySnake(5, 5);

    // Print initial head position
    Point head = mySnake.getHead();
    std::cout << "Initial head: (" << head.x << ", " << head.y << ")\n";

    // Move the snake once
    mySnake.move();
    head = mySnake.getHead();
    std::cout << "After move: (" << head.x << ", " << head.y << ")\n";

    // Grow the snake
    mySnake.grow();
    std::cout << "After grow, length: " << mySnake.getLength() << "\n"; // (we’ll add this function)

    // Change direction
    mySnake.changeDrxn("DOWN");
    mySnake.move();
    head = mySnake.getHead();
    std::cout << "After moving DOWN: (" << head.x << ", " << head.y << ")\n";

    // Self-collision test (manually cause one)
    if (mySnake.checkSelfCollision()) {
        std::cout << "Self collision detected!\n";
    } else {
        std::cout << "No collision.\n";
    }

    return 0;
}
*/
int main() {
    Food food(20, 20);
    Point pos = food.getPosition();
    std::cout << "Food position: (" << pos.x << ", " << pos.y << ")\n";
    return 0;
}