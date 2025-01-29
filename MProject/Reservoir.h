#pragma once
#include <iostream>

class Reservoir {
private:
    char* name;
    char* type;
    double width;
    double length;
    double maxDepth;

    void allocateMemoryForName(const char* newName);
    void allocateMemoryForType(const char* newType);
    void freeMemory();

public:
    Reservoir();
    Reservoir(const char* name, const char* type, double width, double length, double maxDepth);
    Reservoir(const Reservoir& other);
    ~Reservoir();

    void setName(const char* newName);
    void setType(const char* newType);
    void setDimensions(double newWidth, double newLength, double newMaxDepth);

    const char* getName() const;
    const char* getType() const;
    double getWidth() const;
    double getLength() const;
    double getMaxDepth() const;

    double calculateVolume() const;
    double calculateSurfaceArea() const;
    bool isSameType(const Reservoir& other) const;
    bool hasLargerSurfaceAreaThan(const Reservoir& other) const;

    Reservoir& operator=(const Reservoir& other);

    void printInfo() const;
};
