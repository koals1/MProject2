#include "Worker.h"
#pragma once
Worker::Worker(const std::string& name, const std::string& jobTitle)
    : name(name), jobTitle(jobTitle) {}

void Worker::Print() const {
    std::cout << "Position: Worker\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Job Title: " << jobTitle << "\n";
}
