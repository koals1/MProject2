#pragma once
class Contact {
private:
    char* phoneNumber;
    char* city;
    char* country;

public:
    Contact();
    Contact(const char* phone, const char* city, const char* country);
    Contact(const Contact& other);  
    ~Contact();
    void Show() const;

private:
    void CopyString(char*& dest, const char* source);
};
