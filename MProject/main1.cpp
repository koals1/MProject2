#include <iostream>
#include "Phone_book.h"

int main() {
    PhoneBook pb;

    while (true) {
        std::cout << "Phone Book Menu:\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Show All Contacts\n";
        std::cout << "3. Search Contact\n";
        std::cout << "4. Delete Contact\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            char fullName[100], homePhone[15], workPhone[15], mobilePhone[15], additionalInfo[100];

            std::cout << "Enter Full Name: ";
            std::cin >> fullName;

            std::cout << "Enter Home Phone: ";
            std::cin >> homePhone;

            std::cout << "Enter Work Phone: ";
            std::cin >> workPhone;

            std::cout << "Enter Mobile Phone: ";
            std::cin >> mobilePhone;

            std::cout << "Enter Additional Info: ";
            std::cin >> additionalInfo;

            pb.addContact(fullName, homePhone, workPhone, mobilePhone, additionalInfo);
        }
        else if (choice == 2) {
            pb.showAllContacts();
        }
        else if (choice == 3) {
            char fullName[100];
            std::cout << "Enter Full Name to Search: ";
            std::cin >> fullName;

            PhoneBook::Contact* contact = pb.searchContact(fullName);
            if (contact) {
                std::cout << "Found Contact:\n";
                std::cout << "Full Name: " << contact->fullName << "\n";
                std::cout << "Home Phone: " << contact->homePhone << "\n";
                std::cout << "Work Phone: " << contact->workPhone << "\n";
                std::cout << "Mobile Phone: " << contact->mobilePhone << "\n";
                std::cout << "Additional Info: " << contact->additionalInfo << "\n";
            }
            else {
                std::cout << "Contact not found.\n";
            }
        }
        else if (choice == 4) {
            char fullName[100];
            std::cout << "Enter Full Name to Delete: ";
            std::cin >> fullName;
            pb.deleteContact(fullName);
        }
        else if (choice == 5) {
            break;
        }
        else {
            std::cout << "Invalid choice. Please try again.\n";
        }
        
    }

    return 0;
}
