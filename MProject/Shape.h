#pragma once
#include <iostream>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void Show() const = 0;  
    virtual void Input() = 0;       
};
