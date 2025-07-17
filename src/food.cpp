#include "../include/food.h"

Food::Food(int board_width, int board_height){
    std::srand(std::time(nullptr)); //seed random only once
    respawn(board_width, board_height);
}

void Food::respawn(int board_width, int board_height){
    int x = std::rand() % board_width;
    int y = std::rand() % board_height;
    position = Point(x, y);
}

Point Food::getPosition(){
    return position;
}