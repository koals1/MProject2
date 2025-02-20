#include "Square1.h"

Square::Square(double side) : side_length(side) {}

double Square::getSideLength() {
    return side_length;
}

double Square::getArea() {
    return side_length * side_length;
}
