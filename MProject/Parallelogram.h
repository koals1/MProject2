#pragma once
#include "Shape.h"

class Parallelogram : public Shape {
private:
    double x, y, width, height;

public:
    Parallelogram(double x = 0, double y = 0, double width = 1, double height = 1);
    void Show() const override;
    void Input() override;
};
