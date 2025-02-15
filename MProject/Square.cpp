#include "Square.h"

Square::Square(double x, double y, double side)
    : x(x), y(y), side(side) {}

void Square::Show() const {
    std::cout << "Square: (" << x << ", " << y << "), Side: " << side << std::endl;
}

void Square::Input() {
    std::cout << "Enter Square coordinates (x y) and side length: ";
    std::cin >> x >> y >> side;
}
