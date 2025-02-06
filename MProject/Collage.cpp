#include "Collage.h"
#include <iostream>

Collage::Collage(const char* name, const char* contacts) {
    int i = 0;
    while (name[i] != '\0') {
        this->name[i] = name[i];
        i++;
    }
    this->name[i] = '\0';

    i = 0;
    while (contacts[i] != '\0') {
        this->contacts[i] = contacts[i];
        i++;
    }
    this->contacts[i] = '\0';
}

void Collage::show() const {
    std::cout << "Collage Name: " << name << std::endl;
    std::cout << "Contacts: " << contacts << std::endl;
}
