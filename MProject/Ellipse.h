#pragma once
#include "Shape.h"

class Ellipse : public Shape {
private:
    double x, y, width, height;

public:
    Ellipse(double x = 0, double y = 0, double width = 1, double height = 1);
    void Show() const override;
    void Input() override;
};
