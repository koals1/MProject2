#pragma once
class Figure {
public:
    virtual ~Figure() = default;
    virtual double area() const = 0;
};
