#include "Reservoir.h"
#include <iostream>

int main() {
    Reservoir reservoir1("Lake Ontario", "Lake", 1000, 3000, 300); 
    Reservoir reservoir2("Dead Sea", "Sea", 500, 800, 400); 

    std::cout << "Reservoir 1 Info: " << std::endl;
    reservoir1.printInfo();  

    std::cout << "Reservoir 2 Info: " << std::endl;
    reservoir2.printInfo();  

    std::cout << "Reservoir 1 Volume: " << reservoir1.calculateVolume() << " cubic meters." << std::endl;
    std::cout << "Reservoir 2 Volume: " << reservoir2.calculateVolume() << " cubic meters." << std::endl;

    std::cout << "Reservoir 1 Surface Area: " << reservoir1.calculateSurfaceArea() << " square meters." << std::endl;
    std::cout << "Reservoir 2 Surface Area: " << reservoir2.calculateSurfaceArea() << " square meters." << std::endl;

    
    if (reservoir1.isSameType(reservoir2)) {
        std::cout << "Both reservoirs are of the same type." << std::endl;
    }
    else {
        std::cout << "The reservoirs are of different types." << std::endl;
    }

    if (reservoir1.hasLargerSurfaceAreaThan(reservoir2)) {
        std::cout << "Reservoir 1 has a larger surface area." << std::endl;
    }
    else {
        std::cout << "Reservoir 2 has a larger surface area." << std::endl;
    }

  
    reservoir1.setDimensions(1500, 3500, 350);  
    reservoir1.setType("Artificial Lake");  

    std::cout << "Updated Reservoir 1 Info: " << std::endl;
    reservoir1.printInfo();  

    return 0;
}
