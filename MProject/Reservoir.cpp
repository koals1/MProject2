#include "Reservoir.h"
#include <iostream>

Reservoir::Reservoir() : name(nullptr), type(nullptr), width(0), length(0), maxDepth(0) {
    allocateMemoryForName("Unnamed");
    allocateMemoryForType("Unknown");
}

Reservoir::Reservoir(const char* name, const char* type, double width, double length, double maxDepth)
    : width(width), length(length), maxDepth(maxDepth) {
    allocateMemoryForName(name);
    allocateMemoryForType(type);
}

Reservoir::Reservoir(const Reservoir& other) : width(other.width), length(other.length), maxDepth(other.maxDepth) {
    allocateMemoryForName(other.name);
    allocateMemoryForType(other.type);
}

Reservoir::~Reservoir() {
    delete[] name;
    delete[] type;
}

void Reservoir::allocateMemoryForName(const char* newName) {
    name = new char[strlen(newName) + 1];
    size_t i = 0;
    while (newName[i] != '\0') {
        name[i] = newName[i];
        ++i;
    }
    name[i] = '\0';
}

void Reservoir::allocateMemoryForType(const char* newType) {
    type = new char[strlen(newType) + 1];
    size_t i = 0;
    while (newType[i] != '\0') {
        type[i] = newType[i];
        ++i;
    }
    type[i] = '\0';
}

void Reservoir::setName(const char* newName) {
    delete[] name;
    allocateMemoryForName(newName);
}

void Reservoir::setType(const char* newType) {
    delete[] type;
    allocateMemoryForType(newType);
}

void Reservoir::setDimensions(double newWidth, double newLength, double newMaxDepth) {
    width = newWidth;
    length = newLength;
    maxDepth = newMaxDepth;
}

const char* Reservoir::getName() const {
    return name;
}

const char* Reservoir::getType() const {
    return type;
}

double Reservoir::getWidth() const {
    return width;
}

double Reservoir::getLength() const {
    return length;
}

double Reservoir::getMaxDepth() const {
    return maxDepth;
}

double Reservoir::calculateVolume() const {
    return width * length * maxDepth;
}

double Reservoir::calculateSurfaceArea() const {
    return width * length;
}

bool Reservoir::isSameType(const Reservoir& other) const {
    return strcmp(type, other.type) == 0;
}

bool Reservoir::hasLargerSurfaceAreaThan(const Reservoir& other) const {
    if (!isSameType(other)) {
        std::cout << "Reservoirs are of different types." << std::endl;
        return false;
    }
    return calculateSurfaceArea() > other.calculateSurfaceArea();
}

Reservoir& Reservoir::operator=(const Reservoir& other) {
    if (this != &other) {
        delete[] name;
        delete[] type;

        allocateMemoryForName(other.name);
        allocateMemoryForType(other.type);

        width = other.width;
        length = other.length;
        maxDepth = other.maxDepth;
    }
    return *this;
}

void Reservoir::printInfo() const {
    std::cout << "Name: ";
    std::cout << name;
    std::cout << ", Type: ";
    std::cout << type;
    std::cout << ", Width: ";
    std::cout << width;
    std::cout << " m, Length: ";
    std::cout << length;
    std::cout << " m, Maximum depth: ";
    std::cout << maxDepth;
    std::cout << " m" << std::endl;
}
