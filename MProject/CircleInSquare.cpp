#include "CircleInSquare.h"
#include <iostream>

CircleInSquare::CircleInSquare(double side)
    : Circle1(side / 2), Square1(side) {
}

void CircleInSquare::displayInfo() const {
    std::cout << "Circle inscribed in square: " << std::endl;
    std::cout << "Square side: " << side << std::endl;
    std::cout << "Circle radius: " << radius << std::endl;

    
    std::cout << "Square area: " << Square1::getArea() << std::endl;
    std::cout << "Square perimeter: " << Square1::getPerimeter() << std::endl;
    std::cout << "Circle area: " << Circle1::getArea() << std::endl;
    std::cout << "Circle perimeter: " << Circle1::getPerimeter() << std::endl;
}
