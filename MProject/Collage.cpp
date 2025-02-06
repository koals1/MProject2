#include "Collage.h"
#include <iostream>

Collage::Collage(const char* name, const char* contacts, const Contact& contact) {
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

    this->contact = contact;  
}
Collage::~Collage() {

    delete[] name;
    delete[] contacts;
}
void Collage::show() const {
    std::cout << "Collage Name: " << name << "\n";
    std::cout << "Contacts: " << contacts << "\n";
    std::cout << "Contact Information:\n";
    contact.Show();

}

