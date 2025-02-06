#include "Contact.h"
#include <iostream>

Contact::Contact() : phoneNumber(nullptr), city(nullptr), country(nullptr) {
    phoneNumber = new char[8];
    city = new char[8];
    country = new char[8];

    for (int i = 0; i < 7; ++i) {
        phoneNumber[i] = "Unknown"[i];
        city[i] = "Unknown"[i];
        country[i] = "Unknown"[i];
    }
    phoneNumber[7] = '\0';
    city[7] = '\0';
    country[7] = '\0';
}

Contact::Contact(const char* phone, const char* city, const char* country)
    : phoneNumber(nullptr), city(nullptr), country(nullptr) {
    CopyString(phoneNumber, phone);
    CopyString(this->city, city);
    CopyString(this->country, country);
}

Contact::Contact(const Contact& other)
    : phoneNumber(nullptr), city(nullptr), country(nullptr) {
    CopyString(phoneNumber, other.phoneNumber);
    CopyString(city, other.city);
    CopyString(country, other.country);
}

Contact::~Contact() {
    delete[] phoneNumber;
    delete[] city;
    delete[] country;
}

void Contact::Show() const {
    std::cout << "Phone: " << phoneNumber << "\n";
    std::cout << "City: " << city << "\n";
    std::cout << "Country: " << country << "\n";
}

void Contact::CopyString(char*& dest, const char* source) {
    int length = 0;
    while (source[length] != '\0') {
        ++length;
    }

    dest = new char[length + 1];
    for (int i = 0; i < length; ++i) {
        dest[i] = source[i];
    }
    dest[length] = '\0';
}
