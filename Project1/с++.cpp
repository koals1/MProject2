#include <iostream>

struct Book {
    char title[100];
    char author[100];
    char publisher[100];
    char genre[100];
};

bool compareStrings(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (*str1 == *str2);
}

void printBooks(Book books[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Title: " << books[i].title
            << ", Author: " << books[i].author
            << ", Publisher: " << books[i].publisher
            << ", Genre: " << books[i].genre << std::endl;
    }
}

void editBook(Book& book) {
    std::cout << "Enter new title: ";
    std::cin >> book.title;
    std::cout << "Enter new author: ";
    std::cin >> book.author;
    std::cout << "Enter new publisher: ";
    std::cin >> book.publisher;
    std::cout << "Enter new genre: ";
    std::cin >> book.genre;
}

void searchByAuthor(Book books[], int size, const char* author) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (compareStrings(books[i].author, author)) {
            std::cout << books[i].title << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "No books by this author found." << std::endl;
    }
}

void searchByTitle(Book books[], int size, const char* title) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (compareStrings(books[i].title, title)) {
            std::cout << books[i].title << " by " << books[i].author << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "No book with this title found." << std::endl;
    }
}

void sortByTitle(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compareStrings(books[i].title, books[j].title)) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortByAuthor(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compareStrings(books[i].author, books[j].author)) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortByPublisher(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compareStrings(books[i].publisher, books[j].publisher)) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

int main() {
    Book books[10] = {
        {"War and Peace", "Leo Tolstoy", "Academia", "Novel"},
        {"1984", "George Orwell", "Youth", "Fiction"},
        {"Harry Potter and the Sorcerer's Stone", "J.K. Rowling", "ABABAGALAMAGA", "Fantasy"},
        {"The Master and Margarita", "Mikhail Bulgakov", "Pravda", "Novel"},
        {"Crime and Punishment", "Fyodor Dostoevsky", "Zvezda", "Drama"},
        {"One Hundred Years of Solitude", "Gabriel García Márquez", "Literary", "Novel"},
        {"Faust", "Johann Wolfgang von Goethe", "Izdat", "Drama"},
        {"Kobzar", "Taras Shevchenko", "State Publishing", "Poetry"},
        {"The Little Prince", "Antoine de Saint-Exupéry", "Contemporary", "Philosophy"},
        {"Taras Bulba", "Nikolai Gogol", "Youth", "Short Story"}
    };

    int choice;
    while (true) {
        std::cout << "\n1. Print all books" << std::endl;
        std::cout << "2. Edit a book" << std::endl;
        std::cout << "3. Search book by author" << std::endl;
        std::cout << "4. Search book by title" << std::endl;
        std::cout << "5. Sort books by title" << std::endl;
        std::cout << "6. Sort books by author" << std::endl;
        std::cout << "7. Sort books by publisher" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Choice: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 0) {
            break;  
        }

        if (choice == 1) {
            printBooks(books, 10);
        }
        else if (choice == 2) {
            int bookIndex;
            std::cout << "Enter book number to edit (0-9): ";
            std::cin >> bookIndex;
            std::cin.ignore();
            if (bookIndex >= 0 && bookIndex < 10) {
                editBook(books[bookIndex]);
            }
            else {
                std::cout << "Invalid book number!" << std::endl;
            }
        }
        else if (choice == 3) {
            char author[100];
            std::cout << "Enter author name to search: ";
            std::cin.ignore();  
            std::cin.getline(author, 100);
            searchByAuthor(books, 10, author);
        }
        else if (choice == 4) {
            char title[100];
            std::cout << "Enter book title to search: ";
            std::cin.ignore();  
            std::cin.getline(title, 100);
            searchByTitle(books, 10, title);
        }
        else if (choice == 5) {
            sortByTitle(books, 10);
            printBooks(books, 10);
        }
        else if (choice == 6) {
            sortByAuthor(books, 10);
            printBooks(books, 10);
        }
        else if (choice == 7) {
            sortByPublisher(books, 10);
            printBooks(books, 10);
        }
        else {
            std::cout << "Invalid choice!" << std::endl;
        }
    }

    return 0;
}
