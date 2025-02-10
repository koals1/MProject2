#include "function.h"
#include <iostream>
#define INTEGER

int main() {
    srand(time(0));

    const int size = 10;
    int arr[size];

    FillArrayInt(arr, size);
    std::cout << "Array elements: ";
    ShowArrayInt(arr, size);

    int min = FindMinInt(arr, size);
    std::cout << "Minimum element: " << min << std::endl;

    int max = FindMaxInt(arr, size);
    std::cout << "Maximum element: " << max << std::endl;

    SortArrayInt(arr, size);
    std::cout << "Sorted array: ";
    ShowArrayInt(arr, size);

    EditValueInt(arr, size, 0, 100);
    std::cout << "Edited array: ";
    ShowArrayInt(arr, size);

    return 0;
}
