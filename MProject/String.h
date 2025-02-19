#pragma once
#include <iostream>

class String {
private:
    char* str;
    size_t size;    
    size_t capacity; 

    void deepCopy(const String& other);
    void move(String&& other);

public:
    String();
    String(size_t size);
    String(const char* init_str);
    String(const String& other);
    String(String&& other) noexcept;
    ~String();

    void input();
    void output() const;

    
    size_t getSize() const; 
    size_t getCapacity() const;  
    void Append(char c);  
    void Append(const String& str);  
    void Clear(); 
    void Reserve(size_t newCapacity);  
    void Shrink();

    String& operator=(const String& other);
    String& operator=(String&& other) noexcept;
    String operator+(const String& other) const;
    String& operator+=(const String& other);
    char operator[](size_t index) const;
    friend std::ostream& operator<<(std::ostream& os, const String& s);
    bool operator==(const String& other) const;
    bool operator!=(const String& other) const;
    bool operator>(const String& other) const;
    bool operator<(const String& other) const;
};
