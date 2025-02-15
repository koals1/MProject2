#include "Ellipse.h"

Ellipse::Ellipse(double x, double y, double width, double height)
    : x(x), y(y), width(width), height(height) {}

void Ellipse::Show() const {
    std::cout << "Ellipse: (" << x << ", " << y << "), Width: " << width << ", Height: " << height << std::endl;
}

void Ellipse::Input() {
    std::cout << "Enter Ellipse coordinates (x y), width and height: ";
    std::cin >> x >> y >> width >> height;
}
