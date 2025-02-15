#include "Parallelogram.h"

Parallelogram::Parallelogram(double x, double y, double width, double height)
    : x(x), y(y), width(width), height(height) {}

void Parallelogram::Show() const {
    std::cout << "Parallelogram: (" << x << ", " << y << "), Width: " << width << ", Height: " << height << std::endl;
}

void Parallelogram::Input() {
    std::cout << "Enter Parallelogram coordinates (x y), width and height: ";
    std::cin >> x >> y >> width >> height;
}
