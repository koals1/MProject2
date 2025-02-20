#pragma once

class Square1 {
public:
    Square1(double side);
    virtual double getArea() const;
    virtual double getPerimeter() const;
    virtual void displayInfo() const;

protected:
    double side;
};
