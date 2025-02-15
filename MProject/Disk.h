#pragma once
#include "Shape.h"

class Disk : public Shape {
private:
    double centerX, centerY, radius;

public:
    Disk(double centerX = 0, double centerY = 0, double radius = 1);
    void Show() const override;
    void Input() override;
};
