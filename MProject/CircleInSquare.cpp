#include "CircleInSquare.h"


CircleInSquare::CircleInSquare(double side) : Square(side), Circle1(side / 2) {}

double CircleInSquare::getSquareArea() {
    return getSideLength() * getSideLength();
}

double CircleInSquare::getCircleArea() {
    return Circle1::getArea();  
}
