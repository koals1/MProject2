#include <iostream>
#include "Phone_book.h"

PhoneBook::PhoneBook() : contactCount(0) {
    contacts = nullptr;
}

PhoneBook::~PhoneBook() {
    for (int i = 0; i < contactCount; ++i) {
        delete[] contacts[i]->fullName;
        delete contacts[i];
    }
    delete[] contacts;
}

PhoneBook::Contact::Contact(const char* fullName, const char* homePhone, const char* workPhone,
    const char* mobilePhone, const char* additionalInfo) {
    int length = strlen(fullName);  
    this->fullName = new char[length + 1];
    for (int i = 0; i < length; ++i) {
        this->fullName[i] = fullName[i];
    }
    this->fullName[length] = '\0';

    for (int i = 0; homePhone[i] != '\0'; ++i) {
        this->homePhone[i] = homePhone[i];
    }
    this->homePhone[14] = '\0';

    for (int i = 0; workPhone[i] != '\0'; ++i) {
        this->workPhone[i] = workPhone[i];
    }
    this->workPhone[14] = '\0';

    for (int i = 0; mobilePhone[i] != '\0'; ++i) {
        this->mobilePhone[i] = mobilePhone[i];
    }
    this->mobilePhone[14] = '\0';

    for (int i = 0; additionalInfo[i] != '\0'; ++i) {
        this->additionalInfo[i] = additionalInfo[i];
    }
    this->additionalInfo[99] = '\0';
}

PhoneBook::Contact::~Contact() {
    delete[] fullName;
}

bool PhoneBook::compareStrings(const char* str1, const char* str2) {
    return strcmp(str1, str2) == 0; 
}

int PhoneBook::getStringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

void PhoneBook::addContact(const char* fullName, const char* homePhone, const char* workPhone,
    const char* mobilePhone, const char* additionalInfo) {
    Contact** tempContacts = new Contact * [contactCount + 1];
    for (int i = 0; i < contactCount; ++i) {
        tempContacts[i] = contacts[i];
    }
    tempContacts[contactCount] = new Contact(fullName, homePhone, workPhone, mobilePhone, additionalInfo);

    delete[] contacts;
    contacts = tempContacts;
    ++contactCount;
}

void PhoneBook::deleteContact(const char* fullName) {
    for (int i = 0; i < contactCount; ++i) {
        if (compareStrings(contacts[i]->fullName, fullName)) {
            delete[] contacts[i]->fullName;
            delete contacts[i];
            for (int j = i; j < contactCount - 1; ++j) {
                contacts[j] = contacts[j + 1];
            }
            --contactCount;
            return;
        }
    }
}

PhoneBook::Contact* PhoneBook::searchContact(const char* fullName) {
    for (int i = 0; i < contactCount; ++i) {
        if (compareStrings(contacts[i]->fullName, fullName)) {
            return contacts[i];
        }
    }
    return nullptr; 
}

void PhoneBook::showAllContacts() {
    for (int i = 0; i < contactCount; ++i) {
        std::cout << "Full Name: " << contacts[i]->fullName << "\n";
        std::cout << "Home Phone: " << contacts[i]->homePhone << "\n";
        std::cout << "Work Phone: " << contacts[i]->workPhone << "\n";
        std::cout << "Mobile Phone: " << contacts[i]->mobilePhone << "\n";
        std::cout << "Additional Information: " << contacts[i]->additionalInfo << "\n\n";
    }
}
