#pragma once
#include "Employer.h"

class President : public Employer {
private:
    std::string name;
    int experience;

public:
    President(const std::string& name, int experience);
    void Print() const override;
};

