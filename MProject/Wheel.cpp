#include "Wheel.h"
#include <iostream>

Wheel::Wheel(int size) : size(size) {}

void Wheel::displayWheelInfo() const {
    std::cout << "Wheel size: " << size << " inches" << std::endl;
}
