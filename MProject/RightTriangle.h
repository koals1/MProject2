#pragma once
#include "Figure.h"

class RightTriangle : public Figure {
private:
    double base;
    double height;

public:
    RightTriangle(double base, double height);
    double area() const override;
};
