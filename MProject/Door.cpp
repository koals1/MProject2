#include "Door.h"
#include <iostream>

Door::Door(int doorCount) : doorCount(doorCount) {}

void Door::displayDoorInfo() {
    std::cout << "Number of doors: " << doorCount << std::endl;
}
