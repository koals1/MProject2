#pragma once

#include "Wheel.h"
#include "Engine.h"
#include "Door.h"

class Car : public Wheel, public Engine, public Door {
public:
    Car(int wheelSize, int horsepower, int doorCount);
    void displayCarInfo();
};

