#include <iostream>
#include "Stack.h"

int main() {
    
    Stack<int> stack;

    
    std::cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

   
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Stack after pushing 10, 20, 30:" << std::endl;
    std::cout << "Top element: " << stack.top() << std::endl;
    std::cout << "Size of stack: " << stack.size() << std::endl;

   
    stack.pop();
    std::cout << "\nStack after popping top element:" << std::endl;
    std::cout << "Top element: " << stack.top() << std::endl;
    std::cout << "Size of stack: " << stack.size() << std::endl;

    stack.clear();
    std::cout << "\nStack after clearing:" << std::endl;
    std::cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
