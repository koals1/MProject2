//#include <iostream>
////Task 1
//struct Book {
//    char title[100];
//    char author[100];
//    char publisher[100];
//    char genre[100];
//};
//
//int compareByTitle(const void* a, const void* b) {
//    Book* bookA = (Book*)a;
//    Book* bookB = (Book*)b;
//    int i = 0;
//    while (bookA->title[i] != '\0' && bookB->title[i] != '\0') {
//        if (bookA->title[i] < bookB->title[i]) return -1;
//        if (bookA->title[i] > bookB->title[i]) return 1;
//        i++;
//    }
//    return (bookA->title[i] - bookB->title[i]);
//}
//
//int compareByAuthor(const void* a, const void* b) {
//    Book* bookA = (Book*)a;
//    Book* bookB = (Book*)b;
//    int i = 0;
//    while (bookA->author[i] != '\0' && bookB->author[i] != '\0') {
//        if (bookA->author[i] < bookB->author[i]) return -1;
//        if (bookA->author[i] > bookB->author[i]) return 1;
//        i++;
//    }
//    return (bookA->author[i] - bookB->author[i]);
//}
//
//int compareByPublisher(const void* a, const void* b) {
//    Book* bookA = (Book*)a;
//    Book* bookB = (Book*)b;
//    int i = 0;
//    while (bookA->publisher[i] != '\0' && bookB->publisher[i] != '\0') {
//        if (bookA->publisher[i] < bookB->publisher[i]) return -1;
//        if (bookA->publisher[i] > bookB->publisher[i]) return 1;
//        i++;
//    }
//    return (bookA->publisher[i] - bookB->publisher[i]);
//}
//
//void editBook(Book& book) {
//    std::cout << "Editing book:\n";
//    std::cout << "Enter new title: ";
//    std::cin >> book.title;
//    std::cout << "Enter new author: ";
//    std::cin >> book.author;
//    std::cout << "Enter new publisher: ";
//    std::cin >> book.publisher;
//    std::cout << "Enter new genre: ";
//    std::cin >> book.genre;
//}
//
//void printBooks(Book books[], int n) {
//    std::cout << "List of all books:\n";
//    for (int i = 0; i < n; i++) {
//        std::cout << "Title: " << books[i].title << ", Author: " << books[i].author << std::endl;
//         std::cout << ", Publisher: " << books[i].publisher << ", Genre: " << books[i].genre << std::endl;
//    }
//}
//
//void searchByAuthor(Book books[], int n, const char* author) {
//    std::cout << "Books by author " << author << ":\n";
//    bool found = false;
//    for (int i = 0; i < n; i++) 
//    {
//
//        int j = 0;
//        while (books[i].author[j] != '\0' && author[j] != '\0' && books[i].author[j] == author[j]) {
//            j++;
//        }
//        if (books[i].author[j] == '\0' && author[j] == '\0') {
//            std::cout << "Title: " << books[i].title << ", Publisher: " << books[i].publisher
//                << ", Genre: " << books[i].genre << std::endl;
//            found = true;
//        }
//    }
//    if (!found) {
//        std::cout << "No books found.\n";
//    }
//}
//
//void searchByTitle(Book books[], int n, const char* title) {
//    std::cout << "Book with title " << title << ":\n";
//    bool found = false;
//    for (int i = 0; i < n; i++) {
//        int j = 0;
//        while (books[i].title[j] != '\0' && title[j] != '\0' && books[i].title[j] == title[j]) {
//            j++;
//        }
//        if (books[i].title[j] == '\0' && title[j] == '\0') {
//            std::cout << "Author: " << books[i].author << ", Publisher: " << books[i].publisher
//                << ", Genre: " << books[i].genre << std::endl;
//            found = true;
//        }
//    }
//    if (!found) {
//        std::cout << "Book not found.\n";
//    }
//}
//
//int main() {
//    Book books[10] = {
//        {"1984", "George Orwell", "Secker & Warburg", "Dystopia"},
//        {"Brave New World", "Aldous Huxley", "Chatto & Windus", "Dystopia"},
//        {"Fahrenheit 451", "Ray Bradbury", "Ballantine Books", "Dystopia"},
//        {"To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.", "Drama"},
//        {"Pride and Prejudice", "Jane Austen", "T. Egerton", "Romance"},
//        {"The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company", "Fiction"},
//        {"Moby-Dick", "Herman Melville", "Harper & Brothers", "Adventure"},
//        {"War and Peace", "Leo Tolstoy", "The Russian Messenger", "Historical Fiction"},
//        {"The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons", "Novel"},
//        {"Crime and Punishment", "Fyodor Dostoevsky", "The Russian Messenger", "Psychological"}
//    };
//
//    printBooks(books, 10);
//
//    std::cout << "Search by author (enter author): ";
//    char authorSearch[100];
//    std::cin >> authorSearch;
//    searchByAuthor(books, 10, authorSearch);
//
//    std::cout << "Search by title (enter title): ";
//    char titleSearch[100];
//    std::cin >> titleSearch;
//    searchByTitle(books, 10, titleSearch);
//
//    std::cout << "Edit a book (enter book index to edit): ";
//    int bookIndex;
//    std::cin >> bookIndex;
//    if (bookIndex >= 0 && bookIndex < 10) {
//        editBook(books[bookIndex]);
//    }
//
//    qsort(books, 10, sizeof(Book), compareByTitle);
//    std::cout << "Sorted by title:\n";
//    printBooks(books, 10);
//
//    qsort(books, 10, sizeof(Book), compareByAuthor);
//    std::cout << "Sorted by author:\n";
//    printBooks(books, 10);
//
//    qsort(books, 10, sizeof(Book), compareByPublisher);
//    std::cout << "Sorted by publisher:\n";
//    printBooks(books, 10);
//
//    return 0;
//}/*
//Task 2
//
//struct Man {
//    char surname[100];
//    char name[100];
//    int age;
//    int day, month, year;
//};
//
//bool areStringsEqual(const char* str1, const char* str2) {
//    while (*str1 && *str2) {
//        if (*str1 != *str2) return false;
//        ++str1;
//        ++str2;
//    }
//    return *str1 == *str2;
//}
//
//void printMan(const Man& man) {
//    std::cout << "Surname: " << man.surname;
//    std::cout << ", Name: " << man.name;
//    std::cout << ", Age: " << man.age;
//    std::cout << ", Date of Birth: " << man.day << "/" << man.month << "/" << man.year;
//    std::cout << std::endl;
//}
//
//void sortBySurname(Man men[], int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if (areStringsEqual(men[j].surname, men[j + 1].surname) > 0) {
//                Man temp = men[j];
//                men[j] = men[j + 1];
//                men[j + 1] = temp;
//            }
//        }
//    }
//}
//
//void sortByName(Man men[], int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if (areStringsEqual(men[j].name, men[j + 1].name) > 0) {
//                Man temp = men[j];
//                men[j] = men[j + 1];
//                men[j + 1] = temp;
//            }
//        }
//    }
//}
//
//void printBirthdayInMonth(Man men[], int size, int month) {
//    for (int i = 0; i < size; ++i) {
//        if (men[i].month == month) {
//            printMan(men[i]);
//        }
//    }
//}
//
//void addMan(Man*& men, int& size) {
//    Man* newMen = new Man[size + 1];
//    for (int i = 0; i < size; ++i) {
//        newMen[i] = men[i];
//    }
//
//    std::cout << "Enter surname: ";
//    std::cin >> newMen[size].surname;
//    std::cout << "Enter name: ";
//    std::cin >> newMen[size].name;
//    std::cout << "Enter age: ";
//    std::cin >> newMen[size].age;
//    std::cout << "Enter day of birth: ";
//    std::cin >> newMen[size].day;
//    std::cout << "Enter month of birth: ";
//    std::cin >> newMen[size].month;
//    std::cout << "Enter year of birth: ";
//    std::cin >> newMen[size].year;
//
//    delete[] men;
//    men = newMen;
//    size++;
//}
//
//void deleteMan(Man*& men, int& size, const char* surname) {
//    bool found = false;
//    for (int i = 0; i < size; ++i) {
//        if (areStringsEqual(men[i].surname, surname)) {
//            found = true;
//            for (int j = i; j < size - 1; ++j) {
//                men[j] = men[j + 1];
//            }
//            size--;
//            break;
//        }
//    }
//    if (found) {
//        Man* newMen = new Man[size];
//        for (int i = 0; i < size; ++i) {
//            newMen[i] = men[i];
//        }
//        delete[] men;
//        men = newMen;
//        std::cout << "Person with surname " << surname << " was deleted." << std::endl;
//    }
//    else {
//        std::cout << "Person with surname " << surname << " not found." << std::endl;
//    }
//}
//
//int main() {
//    int size = 2;
//    Man* men = new Man[size];
//
//    std::cout << "Enter surname for person 1: ";
//    std::cin >> men[0].surname;
//    std::cout << "Enter name for person 1: ";
//    std::cin >> men[0].name;
//    std::cout << "Enter age for person 1: ";
//    std::cin >> men[0].age;
//    std::cout << "Enter day of birth for person 1: ";
//    std::cin >> men[0].day;
//    std::cout << "Enter month of birth for person 1: ";
//    std::cin >> men[0].month;
//    std::cout << "Enter year of birth for person 1: ";
//    std::cin >> men[0].year;
//
//    std::cout << "Enter surname for person 2: ";
//    std::cin >> men[1].surname;
//    std::cout << "Enter name for person 2: ";
//    std::cin >> men[1].name;
//    std::cout << "Enter age for person 2: ";
//    std::cin >> men[1].age;
//    std::cout << "Enter day of birth for person 2: ";
//    std::cin >> men[1].day;
//    std::cout << "Enter month of birth for person 2: ";
//    std::cin >> men[1].month;
//    std::cout << "Enter year of birth for person 2: ";
//    std::cin >> men[1].year;
//
//    addMan(men, size);
//
//    sortBySurname(men, size);
//    std::cout << "Sorted by surname:" << std::endl;
//    for (int i = 0; i < size; ++i) {
//        printMan(men[i]);
//    }
//
//    sortByName(men, size);
//    std::cout << "Sorted by name:" << std::endl;
//    for (int i = 0; i < size; ++i) {
//        printMan(men[i]);
//    }
//
//    int month;
//    std::cout << "Enter month to search birthdays: ";
//    std::cin >> month;
//    printBirthdayInMonth(men, size, month);
//
//    deleteMan(men, size, "Doe");
//
//    std::cout << "After deletion:" << std::endl;
//    for (int i = 0; i < size; ++i) {
//        printMan(men[i]);
//    }
//
//    delete[] men;
//    return 0;
//}*/
