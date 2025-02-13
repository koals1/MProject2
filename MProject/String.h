#pragma once
#include <iostream>

class String {
private:
    char* str;
    size_t length;

    void deepCopy(const String& other);

public:
    String();
    String(size_t size);
    String(const char* init_str);
    String(const String& other);
    ~String();

    void input();
    void output() const;

    String& operator=(const String& other);
    String operator+(const String& other) const;
    String& operator+=(const String& other);
    char operator[](size_t index) const;
    friend std::ostream& operator<<(std::ostream& os, const String& s);
    bool operator==(const String& other) const;
    bool operator!=(const String& other) const;
    bool operator>(const String& other) const;
    bool operator<(const String& other) const;
};
