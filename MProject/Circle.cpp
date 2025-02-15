#include "Circle.h"

Circle::Circle(double radius)
    : radius(radius) {}

double Circle::area() const {
    return 3.14 * radius * radius; 
}
