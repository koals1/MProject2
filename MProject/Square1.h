#pragma once
class Square {
public:
    Square(double side);
    double getSideLength();
    double getArea();
private:
    double side_length;
};