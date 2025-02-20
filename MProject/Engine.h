#pragma once

class Engine {
public:
    Engine(int horsepower);
    virtual void displayEngineInfo() const; 
private:
    int horsepower;
};
