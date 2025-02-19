#pragma once
#include "Array.h"

template <typename T>
class Stack {
private:
    Array<T> arr;
    size_t topIndex; 

public:
    Stack();
    Stack(const Stack<T>& other);
    Stack(Stack<T>&& other) noexcept;
    ~Stack();

    void clear();
    void pop();
    T top() const;
    void push(const T& value);
    bool isEmpty() const;
    size_t size() const;
};
