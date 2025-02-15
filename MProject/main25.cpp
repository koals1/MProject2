#include "Parallelogram.h"
#include "Disk.h"
#include "Square.h"
#include "Ellipse.h"
#include <iostream>

int main() {
    
    Shape* shapes[4];

   
    shapes[0] = new Parallelogram();
    shapes[1] = new Disk();
    shapes[2] = new Square();
    shapes[3] = new Ellipse();

 
    std::cout << "Enter details for each shape:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        shapes[i]->Input();
    }

    std::cout << "\nShape details:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        shapes[i]->Show();
    }

    for (int i = 0; i < 4; ++i) {
        delete shapes[i];
    }

    return 0;
}
