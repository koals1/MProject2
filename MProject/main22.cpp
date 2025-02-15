#include <iostream>
#include "List.h"

int main() {
    List<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_front(5);
    list.push_front(1);

    std::cout << "List after push operations:" << std::endl;
    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    int position = list.find(20);
    std::cout << "Position of 20: " << position << std::endl;

    list.erase(2);
    std::cout << "After erasing element at position 2:" << std::endl;
    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    list.reverse();
    std::cout << "After reversing the list:" << std::endl;
    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    list.clear();

    std::cout << "List is empty: " << (list.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
