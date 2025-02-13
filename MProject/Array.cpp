#include "Array.h"
#include "iostream"

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
    for (size_t i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

Array::~Array() {
    delete[] arr;
}

void Array::fillRandom() {
    for (size_t i = 0; i < size; i++) {
        arr[i] = (i * 31 + 17) % 100;
    }
}

void Array::fillWithRange(int min, int max) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = min + (i * 31 + 17) % (max - min + 1);
    }
}

void Array::display() const {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void Array::changeSize(size_t newSize) {
    int* newArr = new int[newSize];
    size_t minSize = (newSize < size) ? newSize : size;

    for (size_t i = 0; i < minSize; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
    size = newSize;
}

void Array::sortArray() {
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - 1 - i; j++) {
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
    for (size_t i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int Array::getMax() const {
    int maxVal = arr[0];
    for (size_t i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

Array& Array::operator=(const Array& other) {
    if (this != &other) {
        delete[] arr;
        size = other.size;
        arr = new int[size];
        for (size_t i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

Array Array::operator+(const Array& other) const {
    size_t newSize = size + other.size;
    Array result(newSize);
    for (size_t i = 0; i < size; i++) {
        result.arr[i] = arr[i];
    }
    for (size_t i = 0; i < other.size; i++) {
        result.arr[size + i] = other.arr[i];
    }
    return result;
}

Array& Array::operator+=(const Array& other) {
    size_t newSize = size + other.size;
    int* newArr = new int[newSize];
    for (size_t i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    for (size_t i = 0; i < other.size; i++) {
        newArr[size + i] = other.arr[i];
    }
    delete[] arr;
    arr = newArr;
    size = newSize;
    return *this;
}

int Array::operator[](size_t index) const {
    return arr[index];
}

std::ostream& operator<<(std::ostream& os, const Array& arr) {
    for (size_t i = 0; i < arr.size; i++) {
        os << arr.arr[i] << " ";
    }
    return os;
}

bool Array::operator==(const Array& other) const {
    if (size != other.size)
    return false;
    for (size_t i = 0; i < size; i++) {
        if (arr[i] != other.arr[i]) return false;
    }
    return true;
}

bool Array::operator!=(const Array& other) const {
    return !(*this == other);
}

bool Array::operator>(const Array& other) const {
    return size > other.size;
}

bool Array::operator<(const Array& other) const {
    return size < other.size;
}

Array Array::operator*(const Array& other) const {
    size_t minSize = (size < other.size) ? size : other.size;
    Array result(minSize);
    size_t k = 0;
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < other.size; j++) {
            if (arr[i] == other.arr[j]) {
                result.arr[k++] = arr[i];
                break;
            }
        }
    }
    return result;
}
