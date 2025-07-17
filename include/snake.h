#ifndef SNAKE_H
#define SNAKE_H


#include <vector>
#include <string>
#include "point.h"

using namespace std;
class Snake{
    vector<Point> body; //stores the entire body, body[0] is head 
    string drxn; //"UP" "Down" ........ (Current Direction)

    public:
        Snake(int startX, int startY); //Constructor for start position

        void move(); //forward
        void grow(); //add body segment on eating
        void changeDrxn(string newDrxn); 
        bool checkSelfCollision(); 
        Point getHead(); //return head postion
        int getLength() {
            return body.size();
    }

};
#endif