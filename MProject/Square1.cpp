#include "Square1.h"
#include <iostream>

Square1::Square1(double side) : side(side) {}

double Square1::getArea() const {
    return side * side;
}

double Square1::getPerimeter() const {
    return 4 * side;
}

void Square1::displayInfo() const {
    std::cout << "Square: " << std::endl;
    std::cout << "Side: " << side << std::endl;
    std::cout << "Area: " << getArea() << std::endl;
    std::cout << "Perimeter: " << getPerimeter() << std::endl;
}
