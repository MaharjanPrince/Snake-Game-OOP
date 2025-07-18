#include <iostream>
#include "../include/snake.h"
#include "../include/food.h"
#include "../include/game.h"

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
    /** FOOD LOGIC Checked
    Food food(20, 20);
    Point pos = food.getPosition();
    std::cout << "Food position: (" << pos.x << ", " << pos.y << ")\n";
    return 0;
    */

//    Game game(20,20);
//     // Simulate eating food manually
//     game.update(); // move once
//     game.update(); // move again

//     // Manually grow snake (pretend it ate food)
//     // Usually grow() should be triggered by eating, but we call it directly
//     game.snake.grow();
//     game.snake.grow();
//     game.snake.grow();

//     // Change directions and move to form a loop
//     game.snake.changeDrxn("DOWN");
//     game.update();

//     game.snake.changeDrxn("LEFT");
//     game.update();

//     game.snake.changeDrxn("UP");
//     game.update();  // This move should cause self-collision

//     return 0;



    // Game game(20, 20);
    // game.testSelfCollision(); // this calls everything from inside the class
    // return 0;

}