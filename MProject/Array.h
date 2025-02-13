#pragma once
#include <iostream>

class Array {
private:
    int* arr;
    size_t size;

public:
    Array();
    Array(size_t n);
    Array(size_t n, int min, int max);
    Array(const Array& other);
    ~Array();

    void fillRandom();
    void fillWithRange(int min, int max);
    void display() const;
    void changeSize(size_t newSize);
    void sortArray();
    int getMin() const;
    int getMax() const;

    Array& operator=(const Array& other);
    Array operator+(const Array& other) const;
    Array& operator+=(const Array& other);
    int operator[](size_t index) const;
    friend std::ostream& operator<<(std::ostream& os, const Array& arr);
    bool operator==(const Array& other) const;
    bool operator!=(const Array& other) const;
    bool operator>(const Array& other) const;
    bool operator<(const Array& other) const;
    Array operator*(const Array& other) const;
};
