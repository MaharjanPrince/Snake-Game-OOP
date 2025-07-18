#include "../include/game.h"
#include <iostream>

//member initializer list 
Game::Game(int width, int height)
    : snake(width /2, height/2), food(width, height){
        board_width = width;
        board_height = height;
        running = true;
    }

//^ Creates snake at the center of the board and initializes the food with board dimensions so it can spawn randomly
void Game::update(){
    snake.move();

    //CHeck for food collison
    Point head = snake.getHead();
    Point food_position = food.getPosition();

    if(head.x == food_position.x && head.y == food_position.y){
        snake.grow();
        food.respawn(board_width, board_height);
        std::cout<< "[INFO] food eaten! snake grow \n";
    }

    //self collison checker
    if (snake.checkSelfCollision()){
        std::cout << "[Game Over] Snake collided with itself \n";
        running = false;
    }

    //Wall collisoin
     if (head.x < 0 || head.y < 0 || head.x >= board_width || head.y >= board_height) {
        std::cout << "[GAME OVER] Snake hit the wall!\n";
        running = false;
    }
    
}
void Game::testSelfCollision() {
    std::cout << "Initial head: (" << snake.getHead().x << ", " << snake.getHead().y << ")\n";
    std::cout << "Snake grown to simulate length.\n";

    // Move and grow the snake multiple times to form a body
    for (int i = 0; i < 5; ++i) {
        snake.grow(); // mark for growth
        update();     // actually move + grow
    }

    // Now turn to hit itself
    snake.changeDrxn("DOWN");
    update();

    snake.changeDrxn("LEFT");
    update();

    snake.changeDrxn("UP");
    update(); // should collide here

    // Optional: check running flag
    if (!running) {
        std::cout << "[DEBUG] Game has ended due to collision.\n";
    } else {
        std::cout << "[DEBUG] Game is still running.\n";
    }
}
