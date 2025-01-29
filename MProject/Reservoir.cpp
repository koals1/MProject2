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
    size_t length = 0;
    while (newName[length] != '\0') {
        ++length;
    }

    name = new char[length + 1];
    for (size_t i = 0; i < length; ++i) {
        name[i] = newName[i];
    }
    name[length] = '\0';
}

void Reservoir::allocateMemoryForType(const char* newType) {
    size_t length = 0;
    while (newType[length] != '\0') {
        ++length;
    }

    type = new char[length + 1];
    for (size_t i = 0; i < length; ++i) {
        type[i] = newType[i];
    }
    type[length] = '\0';
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
    size_t i = 0;
    while (type[i] != '\0' && other.type[i] != '\0') {
        if (type[i] != other.type[i]) {
            return false;
        }
        ++i;
    }
    return type[i] == '\0' && other.type[i] == '\0';
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
