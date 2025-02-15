#pragma once
#include "Employer.h"

class Worker : public Employer {
private:
    std::string name;
    std::string jobTitle;

public:
    Worker(const std::string& name, const std::string& jobTitle);
    void Print() const override;
};

