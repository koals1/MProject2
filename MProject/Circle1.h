#pragma once

class Circle1 {
public:
    Circle1(double radius);
    virtual double getArea() const;
    virtual double getPerimeter() const;
    virtual void displayInfo() const;

protected:
    double radius;
};
