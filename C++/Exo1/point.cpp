#include "point.h"
#include <iostream>

point::point(float x, float y)
{
    this->x = x;
    this->y = y;
}


void point::deplace(float x, float y){
    this->x += x;
    this->y += y;
}


void point::copie(point& B){
    B.x = x;
    B.y = y;
}
