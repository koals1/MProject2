#include "Queue.h"
#include <iostream>
template <typename T>
Queue<T>::Queue() : front(0), back(0) {}

template <typename T>
Queue<T>::~Queue() {}

template <typename T>
bool Queue<T>::isEmpty() const {
    return front == back;
}

template <typename T>
size_t Queue<T>::size() const {
    return back - front;
}

template <typename T>
void Queue<T>::push(const T& value) {
    arr.Append(value);
    back++;
}

template <typename T>
void Queue<T>::pop() {
    if (isEmpty()) {
        std::cout << "Queue is empty!" << std::endl;
        return;
    }
    front++;
}

template <typename T>
T Queue<T>::top() const {
    if (isEmpty()) {
        std::cout << "Queue is empty!" << std::endl;
        throw std::out_of_range("Queue is empty");
    }
    return arr[front];
}

template <typename T>
void Queue<T>::clear() {
    front = back = 0;
}
