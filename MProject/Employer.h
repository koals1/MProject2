#pragma once
#include <iostream>

class Employer {
public:
    virtual ~Employer() = default;
    virtual void Print() const = 0;
};


