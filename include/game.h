#ifndef GAME_H
#define GAME_H

#include "snake.h"
#include "food.h"

class Game{
    private:

        Food food;
        int board_width;
        int board_height;
        bool running;

    public:
        Game(int width, int height); //Constructor
        void run(); //Game Loop 
        void update(); 
        Snake snake;
        void testSelfCollision();
};
#endif