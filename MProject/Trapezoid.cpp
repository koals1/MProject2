#include "Trapezoid.h"

Trapezoid::Trapezoid(double base1, double base2, double height)
    : base1(base1), base2(base2), height(height) {}

double Trapezoid::area() const {
    return 0.5 * (base1 + base2) * height;
}
