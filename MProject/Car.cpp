#include "Car.h"
#include <iostream>

Car::Car(int wheelSize, int horsepower, int doorCount)
    : Wheel(wheelSize), Engine(horsepower), Door(doorCount) {
}

void Car::displayCarInfo() {
    std::cout << "Car details:" << std::endl;
    displayWheelInfo();
    displayEngineInfo();
    displayDoorInfo();
}
