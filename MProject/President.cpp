#include "President.h"
#include <iostream>
President::President(const std::string& name, int experience)
    : name(name), experience(experience) {}

void President::Print() const {
    std::cout << "Position: President\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Experience: " << experience << " years\n";
}
