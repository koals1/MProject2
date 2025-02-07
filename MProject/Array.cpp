#include "Array.h"
#include "Array.h"

Array::Array() : size(0), arr(nullptr) {}

Array::Array(size_t n) : size(n) {
    arr = new int[size];
    fillRandom();
}

Array::Array(size_t n, int min, int max) : size(n) {
    arr = new int[size];
    fillWithRange(min, max);
}

Array::Array(const Array& other) : size(other.size) {
    arr = new int[size];
    for (size_t i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }
}

Array::~Array() {
    delete[] arr;
}

void Array::fillRandom() {
    for (size_t i = 0; i < size; ++i) {
        arr[i] = (i * 31 + 17) % 100;  
    }
}

void Array::fillWithRange(int min, int max) {
    for (size_t i = 0; i < size; ++i) {
        arr[i] = min + (i * 31 + 17) % (max - min + 1);
    }
}

void Array::display() const {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void Array::changeSize(size_t newSize) {
    int* newArr = new int[newSize];
    size_t minSize = (newSize < size) ? newSize : size;

    for (size_t i = 0; i < minSize; ++i) {
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
    size = newSize;
}

void Array::sortArray() {
  
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int Array::getMin() const {
    int minVal = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int Array::getMax() const {
    int maxVal = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
