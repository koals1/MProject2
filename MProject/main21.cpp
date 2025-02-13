#include "Array.h"
#include <iostream>

int main() {
    Array<int> arr1(10);
    arr1.display();

    Array<int> arr2(5, 1, 100);
    arr2.display();

    Array<int> arr3 = arr2;
    arr3.display();

    arr3.sortArray();
    arr3.display();

    std::cout << "Min value: " << arr3.getMin() << std::endl;
    std::cout << "Max value: " << arr3.getMax() << std::endl;

    arr3.changeSize(8);
    arr3.display();

    Array<int> arr4 = arr1 + arr2;
    arr4.display();

    arr1 += arr2;
    arr1.display();

    std::cout << "arr1[2]: " << arr1[2] << std::endl;

    std::cout << "arr1 == arr2: " << (arr1 == arr2) << std::endl;
    std::cout << "arr1 != arr2: " << (arr1 != arr2) << std::endl;

    std::cout << "arr1 > arr2: " << (arr1 > arr2) << std::endl;
    std::cout << "arr1 < arr2: " << (arr1 < arr2) << std::endl;

    Array<int> arr5 = arr1 * arr2;
    arr5.display();

    arr1.Remove(2);  
    arr1.display();  
    return 0;
}
