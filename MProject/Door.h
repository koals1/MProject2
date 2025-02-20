#pragma once

class Door {
public:
    Door(int doorCount);
    virtual void displayDoorInfo() const;  
private:
    int doorCount;
};
