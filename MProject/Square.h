#pragma once
#include "Shape.h"

class Square : public Shape {
private:
    double x, y, side;

public:
    Square(double x = 0, double y = 0, double side = 1);
    void Show() const override;
    void Input() override;
};
