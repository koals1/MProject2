#include "Wheel.h"
#include <iostream>

Wheel::Wheel(int size) : size(size) {}

void Wheel::displayWheelInfo() {
    std::cout << "Wheel size: " << size << " inches" << std::endl;
}
