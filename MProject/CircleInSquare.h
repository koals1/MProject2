#pragma once
#include "Square1.h"
#include "Circle1.h"

class CircleInSquare : public Square, public Circle1 {
public:
    CircleInSquare(double side);
    double getSquareArea();
    double getCircleArea();
};

