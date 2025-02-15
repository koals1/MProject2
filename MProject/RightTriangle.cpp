#include "RightTriangle.h"

RightTriangle::RightTriangle(double base, double height)
    : base(base), height(height) {}

double RightTriangle::area() const {
    return 0.5 * base * height;
}
