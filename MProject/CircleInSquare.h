#pragma once

#include "Circle1.h"
#include "Square1.h"

class CircleInSquare : public virtual Circle1, public virtual Square1 {
public:
    CircleInSquare(double side);
    void displayInfo() const override;
};
