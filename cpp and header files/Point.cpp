#include "Point.h"
#include <random>

// Default constructor
Point::Point() {
    x = 0;
    y = 0;
    sign = 1;
}

// Constructor that takes in a value that is used to generate a random number between -200 and 200
// x and y gets assigned a random value between -200 and 200
// if y > x then that point is above the y=x line
Point::Point(double seed) {
    std::mt19937 mt{seed};
    std::uniform_int_distribution<> dist(-200, 200);
    x = dist(mt);
    std::uniform_int_distribution<> dist2(-200, 200);
    y = dist2(mt);
    if (y > x) sign = 1;
    else sign = -1;
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

int Point::getSign() {
    return sign;
}
