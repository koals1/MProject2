#pragma once
#include <iostream>
#include "Array.h"

template <typename T>
class Queue {
private:
    Array<T> arr;
    size_t front;
    size_t back;

public:
    Queue();
    ~Queue();
    bool isEmpty() const;
    size_t size() const;
    void push(const T& value);
    void pop();
    T top() const;
    void clear();
};
