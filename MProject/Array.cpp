#include "Array.h"

template <typename T>
void Array<T>::resize(size_t newCapacity) {
    T* newArr = new T[newCapacity];
    size_t minSize = (newCapacity < size) ? newCapacity : size;

    for (size_t i = 0; i < minSize; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
    capacity = newCapacity;
}

template <typename T>
Array<T>::Array() : size(0), capacity(10), arr(new T[capacity]) {}

template <typename T>
Array<T>::Array(size_t n) : size(n), capacity(n) {
    arr = new T[capacity];
    fillRandom();
}

template <typename T>
Array<T>::Array(size_t n, T min, T max) : size(n), capacity(n) {
    arr = new T[capacity];
    fillWithRange(min, max);
}

template <typename T>
Array<T>::Array(const Array<T>& other) : size(other.size), capacity(other.capacity) {
    arr = new T[capacity];
    for (size_t i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

template <typename T>
Array<T>::Array(Array<T>&& other) noexcept {
    arr = other.arr;
    size = other.size;
    capacity = other.capacity;
    other.arr = nullptr;
    other.size = 0;
    other.capacity = 0;
}

template <typename T>
Array<T>::~Array() {
    delete[] arr;
}

template <typename T>
void Array<T>::fillRandom() {
    for (size_t i = 0; i < size; i++) {
        arr[i] = (i * 31 + 17) % 100;
    }
}

template <typename T>
void Array<T>::fillWithRange(T min, T max) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = min + (i * 31 + 17) % (max - min + 1);
    }
}

template <typename T>
void Array<T>::display() const {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void Array<T>::changeSize(size_t newSize) {
    if (newSize > capacity) {
        reserve(newSize * 2);  
    }

    size = newSize;
}

template <typename T>
void Array<T>::sortArray() {
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
T Array<T>::getMin() const {
    T minVal = arr[0];
    for (size_t i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

template <typename T>
T Array<T>::getMax() const {
    T maxVal = arr[0];
    for (size_t i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T>
void Array<T>::Append(T value) {
    if (size == capacity) {
        reserve(capacity * 2);  
    }
    arr[size++] = value;
}

template <typename T>
void Array<T>::Remove(size_t index) {
    if (index >= size) {
        std::cout << "Index out of bounds!" << std::endl;
        return;
    }

    for (size_t i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    --size;
}

template <typename T>
Array<T> Array<T>::operator+(const Array<T>& other) const {
    Array<T> result(size + other.size);
    for (size_t i = 0; i < size; i++) {
        result.arr[i] = arr[i];
    }
    for (size_t i = 0; i < other.size; i++) {
        result.arr[size + i] = other.arr[i];
    }
    return result;
}

template <typename T>
Array<T>& Array<T>::operator+=(const Array<T>& other) {
    Array<T> temp = *this + other;
    *this = temp;
    return *this;
}

template <typename T>
T& Array<T>::operator[](size_t index) {
    return arr[index];
}

template <typename T>
bool Array<T>::operator==(const Array<T>& other) const {
    if (size != other.size) return false;
    for (size_t i = 0; i < size; i++) {
        if (arr[i] != other.arr[i]) return false;
    }
    return true;
}

template <typename T>
bool Array<T>::operator!=(const Array<T>& other) const {
    return !(*this == other);
}

template <typename T>
bool Array<T>::operator>(const Array<T>& other) const {
    return size > other.size;
}

template <typename T>
bool Array<T>::operator<(const Array<T>& other) const {
    return size < other.size;
}

template <typename T>
Array<T> Array<T>::operator*(const Array<T>& other) const {
    Array<T> result(std::min(size, other.size));
    size_t idx = 0;
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < other.size; j++) {
            if (arr[i] == other.arr[j]) {
                result.arr[idx++] = arr[i];
                break;
            }
        }
    }
    return result;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        delete[] arr;
        size = other.size;
        capacity = other.capacity;
        arr = new T[capacity];
        for (size_t i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T>&& other) noexcept {
    if (this != &other) {
        delete[] arr;
        arr = other.arr;
        size = other.size;
        capacity = other.capacity;
        other.arr = nullptr;
        other.size = 0;
        other.capacity = 0;
    }
    return *this;
}

template <typename T>
void Array<T>::reserve(size_t newCapacity) {
    if (newCapacity > capacity) {
        resize(newCapacity);
    }
}

template <typename T>
void Array<T>::shrinkToFit() {
    if (size < capacity) {
        resize(size);
    }
}
