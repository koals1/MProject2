#include "Circle1.h"
#include <iostream>

Circle1::Circle1(double radius) : radius(radius) {}

double Circle1::getArea() const {
    return 3.14 * radius * radius;  
}

double Circle1::getPerimeter() const {
    return 2 * 3.14 * radius;  
}

void Circle1::displayInfo() const {
    std::cout << "Circle: " << std::endl;
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Area: " << getArea() << std::endl;
    std::cout << "Perimeter: " << getPerimeter() << std::endl;
}
