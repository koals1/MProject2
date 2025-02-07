#include "String.h"

String::String() : length(80) {
    str = new char[length + 1];
    str[0] = '\0';
}

String::String(size_t size) : length(size) {
    str = new char[length + 1];
    str[0] = '\0';
}

String::String(const char* init_str) {
    length = 0;
    while (init_str[length] != '\0') {
        length++;
    }
    str = new char[length + 1];
    for (size_t i = 0; i < length; ++i) {
        str[i] = init_str[i];
    }
    str[length] = '\0';
}

String::String(const String& other) : length(other.length) {
    str = new char[length + 1];
    for (size_t i = 0; i < length; ++i) {
        str[i] = other.str[i];
    }
    str[length] = '\0';
}

String::~String() {
    delete[] str;
}

void String::input() {
    std::cout << "Enter a string: ";
    size_t i = 0;
    char ch;
    while (i < length && std::cin >> ch) {
        str[i++] = ch;
    }
    str[i] = '\0';
}

void String::output() const {
    std::cout << str << std::endl;
}
