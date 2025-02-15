#pragma once
#include "Employer.h"

class Manager : public Employer {
private:
    std::string name;
    int departmentCount;

public:
    Manager(const std::string& name, int departmentCount);
    void Print() const override;
};

