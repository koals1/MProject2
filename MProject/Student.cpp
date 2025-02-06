#include "Student.h"
#include <iostream>

Student::Student(const char* fullName, const char* birthDate, const Contact& contact, const Collage& collage)
    : contact(contact), collage(collage) {
    int i = 0;
    while (fullName[i] != '\0' && i < sizeof(this->fullName) - 1) {
        this->fullName[i] = fullName[i];
        ++i;
    }
    this->fullName[i] = '\0';

    i = 0;
    while (birthDate[i] != '\0' && i < sizeof(this->birthDate) - 1) {
        this->birthDate[i] = birthDate[i];
        ++i;
    }
    this->birthDate[i] = '\0';
}

Student::~Student() {
    delete[] fullName;
    delete[] birthDate;
}
void Student::show() const {
    std::cout << "Full Name: " << fullName << "\n";
    std::cout << "Birth Date: " << birthDate << "\n";
    std::cout << "Contact Information:\n";
    contact.Show();
    std::cout << "College Information:\n";
    collage.show();
}
