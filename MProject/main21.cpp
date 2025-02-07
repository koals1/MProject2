#include "Array.h"

int main() {
    Array arr1(10);
    arr1.display();

    Array arr2(5, 1, 100);
    arr2.display();

    Array arr3 = arr2;
    arr3.display();

    arr3.sortArray();
    arr3.display();

    std::cout << "Min value: " << arr3.getMin() << std::endl;
    std::cout << "Max value: " << arr3.getMax() << std::endl;

    arr3.changeSize(8);
    arr3.display();

    return 0;
}
