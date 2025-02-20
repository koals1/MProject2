#include "Engine.h"
#include <iostream>

Engine::Engine(int horsepower) : horsepower(horsepower) {}

void Engine::displayEngineInfo() {
    std::cout << "Engine horsepower: " << horsepower << " HP" << std::endl;
}
