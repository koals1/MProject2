#include "Stack.h"

template <typename T>
Stack<T>::Stack() : topIndex(-1) {}

template <typename T>
Stack<T>::Stack(const Stack<T>& other) : arr(other.arr), topIndex(other.topIndex) {}

template <typename T>
Stack<T>::Stack(Stack<T>&& other) noexcept : arr(std::move(other.arr)), topIndex(other.topIndex) {
    other.topIndex = -1;
}

template <typename T>
Stack<T>::~Stack() {}

template <typename T>
void Stack<T>::clear() {
    topIndex = -1;
}

template <typename T>
void Stack<T>::pop() {
    if (topIndex >= 0) {
        topIndex--;
    }
}

template <typename T>
T Stack<T>::top() const {
    if (topIndex >= 0) {
        return arr[topIndex];
    }
    throw std::out_of_range("Stack is empty!");
}

template <typename T>
void Stack<T>::push(const T& value) {
    arr.Append(value);
    topIndex++;
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return topIndex == -1;
}

template <typename T>
size_t Stack<T>::size() const {
    return topIndex + 1;
}
