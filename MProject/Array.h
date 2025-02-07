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
};