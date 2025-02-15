#pragma once
#include "Figure.h"

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double radius);
    double area() const override;
};
