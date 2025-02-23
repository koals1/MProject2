#pragma once
#include "Contact.h"
#include "Collage.h"

class Student {
private:
    char fullName[100];
    char birthDate[20];
    Contact contact;
    Collage collage;

public:
    Student(const char* fullName, const char* birthDate, const Contact& contact, const Collage& collage);
    Student(const Student& other);
    Student(Student&& other) noexcept;
    ~Student();

    Student& operator=(const Student& other);
    Student& operator=(Student&& other) noexcept;

    void show() const;
};
