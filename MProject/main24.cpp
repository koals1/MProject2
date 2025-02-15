#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapezoid.h"
#include <iostream>

int main() {
    Rectangle rect(10, 5);
    Circle circ(7);
    RightTriangle tri(6, 8);
    Trapezoid trap(5, 10, 4);

    Figure* figures[4] = { &rect, &circ, &tri, &trap };

    for (int i = 0; i < 4; ++i) {
        std::cout << "Area: " << figures[i]->area() << std::endl;
    }

    return 0;
}
