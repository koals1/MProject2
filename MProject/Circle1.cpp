#include "Circle1.h"

Circle1::Circle1(double radius) : radius(radius) {}

double Circle1::getRadius() {
    return radius;
}

double Circle1::getArea() {
    return 3.14 * radius * radius;  
}
