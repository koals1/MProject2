#include "Disk.h"

Disk::Disk(double centerX, double centerY, double radius)
    : centerX(centerX), centerY(centerY), radius(radius) {}

void Disk::Show() const {
    std::cout << "Disk: Center(" << centerX << ", " << centerY << "), Radius: " << radius << std::endl;
}

void Disk::Input() {
    std::cout << "Enter Disk center coordinates (x y) and radius: ";
    std::cin >> centerX >> centerY >> radius;
}
