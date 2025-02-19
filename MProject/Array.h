#pragma once
#include <iostream>

template <typename T>
class Array {
private:
    T* arr;
    size_t size;

    void deepCopy(const Array<T>& other);
    void move(Array<T>&& other);

public:
    Array();
    Array(size_t n);
    Array(size_t n, T min, T max);
    Array(const Array<T>& other); 
    Array(Array<T>&& other) noexcept; 
    ~Array();

    void fillRandom();
    void fillWithRange(T min, T max);
    void display() const;
    void changeSize(size_t newSize);
    void sortArray();
    T getMin() const;
    T getMax() const;

    void Append(T value);
    void Remove(size_t index);
    Array<T> operator+(const Array<T>& other) const;
    Array<T>& operator+=(const Array<T>& other);
    T& operator[](size_t index);
    bool operator==(const Array<T>& other) const;
    bool operator!=(const Array<T>& other) const;
    bool operator>(const Array<T>& other) const;
    bool operator<(const Array<T>& other) const;
    Array<T> operator*(const Array<T>& other) const;
    Array<T>& operator=(const Array<T>& other); 
    Array<T>& operator=(Array<T>&& other) noexcept; 
};
