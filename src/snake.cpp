#include <iostream>
#include "snake.h"

Snake::Snake(int startX, int startY){
    Point head(startX, startY);
    body.push_back(head);
    drxn = "RIGHT"; //defualt for now
}

//Move logics
void Snake::move(){
    Point head = body[0];
    Point newHead = head;

    if (drxn == "UP") {
        newHead.y -= 1;
    } else if (drxn == "DOWN") {
        newHead.y += 1;
    } else if (drxn == "LEFT") {
        newHead.x -= 1;
    } else if (drxn == "RIGHT") {
        newHead.x += 1;
    }

    body.insert(body.begin(), newHead); // add new head
    body.pop_back();                    // remove tail
}

//Grow logic
void Snake::grow(){
    Point tail = body[body.size()-1];
    body.push_back(tail); //adds one segment to tail
}

//Changing Direction logic
void Snake::changeDrxn(std::string newDrxn){
    //Preventing 180 degree turn
    if ((drxn == "UP" && newDrxn == "DOWN") ||
        (drxn == "DOWN" && newDrxn == "UP") ||
        (drxn == "LEFT" && newDrxn == "RIGHT") ||
        (drxn == "RIGHT" && newDrxn == "LEFT")) {
        return; // invalid turn
    }

    drxn = newDrxn;
}

//Checking self collision logic
bool Snake::checkSelfCollision() {
    Point head = body[0];
    for (int i = 1; i < body.size(); ++i) {
        if (body[i].x == head.x && body[i].y == head.y) {
            return true;
        }
    }
    return false;
}
//to get head

Point Snake::getHead() {
    return body[0];
}
