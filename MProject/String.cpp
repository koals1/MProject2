#include "String.h"

void String::deepCopy(const String& other) {
    delete[] str;
    length = other.length;
    str = new char[length + 1];
    for (size_t i = 0; i < length; i++) {
        str[i] = other.str[i];
    }
    str[length] = '\0';
}

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
    for (size_t i = 0; i < length; i++) {
        str[i] = init_str[i];
    }
    str[length] = '\0';
}

String::String(const String& other) {
    deepCopy(other);
}

String::String(String&& other) noexcept : str(other.str), length(other.length) {
    other.str = nullptr; 
    other.length = 0;
}

String::~String() {
    delete[] str;
}

void String::input() {
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

String& String::operator=(const String& other) {
    if (this != &other) {
        deepCopy(other);
    }
    return *this;
}

String& String::operator=(String&& other) noexcept {
    if (this != &other) {
        delete[] str; 
        str = other.str; 
        length = other.length;

        other.str = nullptr; 
        other.length = 0;
    }
    return *this;
}

String String::operator+(const String& other) const {
    size_t newLength = length + other.length;
    String result(newLength);
    for (size_t i = 0; i < length; i++) {
        result.str[i] = str[i];
    }
    for (size_t i = 0; i < other.length; i++) {
        result.str[length + i] = other.str[i];
    }
    result.str[newLength] = '\0';
    return result;
}

String& String::operator+=(const String& other) {
    size_t newLength = length + other.length;
    char* newStr = new char[newLength + 1];
    for (size_t i = 0; i < length; i++) {
        newStr[i] = str[i];
    }
    for (size_t i = 0; i < other.length; i++) {
        newStr[length + i] = other.str[i];
    }
    newStr[newLength] = '\0';
    delete[] str;
    str = newStr;
    length = newLength;
    return *this;
}

char String::operator[](size_t index) const {
    return str[index];
}

std::ostream& operator<<(std::ostream& os, const String& s) {
    os << s.str;
    return os;
}

bool String::operator==(const String& other) const {
    if (length != other.length) {
        return false;
    }
    for (size_t i = 0; i < length; i++) {
        if (str[i] != other.str[i]) {
            return false;
        }
    }
    return true;
}

bool String::operator!=(const String& other) const {
    return !(*this == other);
}

bool String::operator>(const String& other) const {
    return length > other.length;
}

bool String::operator<(const String& other) const {
    return length < other.length;
}
