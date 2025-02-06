#pragma once
#include "Contact.h"

class Collage {
private:
    char name[100];
    char contacts[100];
    Contact contact;  

public:
    Collage(const char* name, const char* contacts, const Contact& contact);
    ~Collage();
    void show() const;
};
