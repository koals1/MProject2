#include <iostream>
#include "Queue.h"

int main() {
    Queue<int> q;

    std::cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    q.push(10);
    q.push(20);
    q.push(30);
    std::cout << "Queue after pushing 10, 20, 30:" << std::endl;
    std::cout << "Front element: " << q.top() << std::endl;
    std::cout << "Size of queue: " << q.size() << std::endl;

    q.pop();
    std::cout << "\nQueue after popping front element:" << std::endl;
    std::cout << "Front element: " << q.top() << std::endl;
    std::cout << "Size of queue: " << q.size() << std::endl;

    q.clear();
    std::cout << "\nQueue after clearing:" << std::endl;
    std::cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
