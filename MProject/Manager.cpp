#include "Manager.h"
#pragma once
Manager::Manager(const std::string& name, int departmentCount)
    : name(name), departmentCount(departmentCount) {}

void Manager::Print() const {
    std::cout << "Position: Manager\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Department Count: " << departmentCount << "\n";
}
