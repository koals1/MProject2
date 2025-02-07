#pragma once
#include <iostream>

class String {
private:
    char* str;
    size_t length;

public:
    String();
    String(size_t size);
    String(const char* init_str);
    String(const String& other);
    ~String();

    void input();
    void output() const;
};
