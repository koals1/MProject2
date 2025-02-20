#include <iostream>
#include "CircleInSquare.h"

int main() {
    CircleInSquare circleInSquare(10);
    std::cout << "Square Area: " << circleInSquare.getSquareArea() << std::endl;
    std::cout << "Circle Area: " << circleInSquare.getCircleArea() << std::endl;
    return 0;
}
