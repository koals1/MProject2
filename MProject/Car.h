#pragma once

#include "Wheel.h"
#include "Engine.h"
#include "Door.h"

class Car : public virtual Wheel, public virtual Engine, public virtual Door {  
public:
    Car(int wheelSize, int horsepower, int doorCount);
    void displayCarInfo() const;
};
