#include "Array.h"

template <typename T>
void Array<T>::deepCopy(const Array<T>& other) {
    delete[] arr;
    size = other.size;
    arr = new T[size];
    for (size_t i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

template <typename T>
void Array<T>::move(Array<T>&& other) {
    arr = other.arr;
    size = other.size;
    other.arr = nullptr;
    other.size = 0;
}

template <typename T>
Array<T>::Array() : size(0), arr(nullptr) {}

template <typename T>
Array<T>::Array(size_t n) : size(n) {
    arr = new T[size];
    fillRandom();
}

template <typename T>
Array<T>::Array(size_t n, T min, T max) : size(n) {
    arr = new T[size];
    fillWithRange(min, max);
}

template <typename T>
Array<T>::Array(const Array<T>& other) : size(other.size) {
    arr = new T[size];
    for (size_t i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

template <typename T>
Array<T>::Array(Array<T>&& other) noexcept {
    move(std::move(other));
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
    T* newArr = new T[newSize];
    size_t minSize = (newSize < size) ? newSize : size;

    for (size_t i = 0; i < minSize; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
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
    changeSize(size + 1);
    arr[size - 1] = value;
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

    changeSize(size - 1);
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
        deepCopy(other);
    }
    return *this;
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T>&& other) noexcept {
    if (this != &other) {
        delete[] arr;
        move(std::move(other));
    }
    return *this;
}
