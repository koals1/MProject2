#pragma once

class Wheel {
public:
    Wheel(int size);
    virtual void displayWheelInfo() const;  
private:
    int size;
};
