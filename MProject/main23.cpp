#include "President.h"
#include "Manager.h"
#include "Worker.h"

int main() {
    President president("John Doe", 15);
    Manager manager("Alice Smith", 5);
    Worker worker("Bob Brown", "Software Engineer");

    president.Print();
    std::cout << std::endl;

    manager.Print();
    std::cout << std::endl;

    worker.Print();
    std::cout << std::endl;

    return 0;
}
