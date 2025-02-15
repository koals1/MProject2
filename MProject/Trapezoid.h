#pragma once
#include "Figure.h"

class Trapezoid : public Figure {
private:
    double base1;
    double base2;
    double height;

public:
    Trapezoid(double base1, double base2, double height);
    double area() const override;
};
