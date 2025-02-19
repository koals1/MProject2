#include "String.h"

void String::deepCopy(const String& other) {
    delete[] str;
    size = other.size;
    capacity = other.capacity;
    str = new char[capacity + 1];
    for (size_t i = 0; i < size; i++) {
        str[i] = other.str[i];
    }
    str[size] = '\0';
}

String::String() : size(0), capacity(80) {  // Ємність за замовчуванням
    str = new char[capacity + 1];
    str[0] = '\0';
}

String::String(size_t size) : size(size), capacity(size + 1) {
    str = new char[capacity + 1];
    str[0] = '\0';
}

String::String(const char* init_str) {
    size = 0;
    while (init_str[size] != '\0') {
        size++;
    }
    capacity = size + 1;  // Ємність = розмір рядка + 1
    str = new char[capacity + 1];
    for (size_t i = 0; i < size; i++) {
        str[i] = init_str[i];
    }
    str[size] = '\0';
}

String::String(const String& other) {
    deepCopy(other);
}

String::String(String&& other) noexcept : str(other.str), size(other.size), capacity(other.capacity) {
    other.str = nullptr;
    other.size = 0;
    other.capacity = 0;
}

String::~String() {
    delete[] str;
}

void String::input() {
    size_t i = 0;
    char ch;
    while (i < capacity && std::cin >> ch) {
        str[i++] = ch;
    }
    str[i] = '\0';
}

void String::output() const {
    std::cout << str << std::endl;
}

size_t String::getSize() const {
    return size;
}

size_t String::getCapacity() const {
    return capacity;
}

void String::Append(char c) {
    if (size + 1 >= capacity) {
        Reserve(capacity * 2);  
    }
    str[size++] = c;
    str[size] = '\0';
}

void String::Append(const String& str2) {
    if (size + str2.size >= capacity) {
        Reserve(size + str2.size);
    }
    for (size_t i = 0; i < str2.size; i++) {
        str[size++] = str2.str[i];
    }
    str[size] = '\0';
}

void String::Clear() {
    size = 0;
    str[0] = '\0';
}

void String::Reserve(size_t newCapacity) {
    if (newCapacity <= capacity) 
    return;  
    capacity = newCapacity;
    char* newStr = new char[capacity + 1];
    for (size_t i = 0; i < size; i++) {
        newStr[i] = str[i];
    }
    newStr[size] = '\0';
    delete[] str;
    str = newStr;
}

void String::Shrink() {
    capacity = size;
    char* newStr = new char[capacity + 1];
    for (size_t i = 0; i < size; i++) {
        newStr[i] = str[i];
    }
    newStr[size] = '\0';
    delete[] str;
    str = newStr;
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
        size = other.size;
        capacity = other.capacity;
        other.str = nullptr;
        other.size = 0;
        other.capacity = 0;
    }
    return *this;
}

String String::operator+(const String& other) const {
    String result(size + other.size);
    for (size_t i = 0; i < size; i++) {
        result.str[i] = str[i];
    }
    for (size_t i = 0; i < other.size; i++) {
        result.str[size + i] = other.str[i];
    }
    result.str[size + other.size] = '\0';
    return result;
}

String& String::operator+=(const String& other) {
    Append(other);
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
    if (size != other.size) return false;
    for (size_t i = 0; i < size; i++) {
        if (str[i] != other.str[i]) return false;
    }
    return true;
}

bool String::operator!=(const String& other) const {
    return !(*this == other);
}

bool String::operator>(const String& other) const {
    return size > other.size;
}

bool String::operator<(const String& other) const {
    return size < other.size;
}
