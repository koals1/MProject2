#include "List.h"

template <typename T>
List<T>::List() : head(nullptr), tail(nullptr) {}

template <typename T>
List<T>::~List() {
    clear();
}

template <typename T>
void List<T>::push_back(const T& value) {
    Node* newNode = new Node(value);
    if (tail) {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else {
        head = tail = newNode;
    }
}

template <typename T>
void List<T>::push_front(const T& value) {
    Node* newNode = new Node(value);
    if (head) {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    else {
        head = tail = newNode;
    }
}

template <typename T>
void List<T>::pop_back() {
    if (tail) {
        Node* temp = tail;
        if (tail->prev) {
            tail = tail->prev;
            tail->next = nullptr;
        }
        else {
            head = tail = nullptr;
        }
        delete temp;
    }
}

template <typename T>
void List<T>::pop_front() {
    if (head) {
        Node* temp = head;
        if (head->next) {
            head = head->next;
            head->prev = nullptr;
        }
        else {
            head = tail = nullptr;
        }
        delete temp;
    }
}

template <typename T>
T& List<T>::back() {
    if (tail) {
        return tail->data;
    }
    static T empty;
    return empty;
}

template <typename T>
T& List<T>::front() {
    if (head) {
        return head->data;
    }
    static T empty;
    return empty;
}

template <typename T>
void List<T>::clear() {
    while (head) {
        pop_front();
    }
}

template <typename T>
bool List<T>::isEmpty() const {
    return head == nullptr;
}

template <typename T>
int List<T>::find(const T& value) const {
    Node* current = head;
    int position = 0;
    while (current) {
        if (current->data == value) {
            return position;
        }
        current = current->next;
        position++;
    }
    return 0; 
}

template <typename T>
void List<T>::erase(int position) {
    if (position < 0) return;

    Node* current = head;
    int currentPosition = 0;

    while (current && currentPosition < position) {
        current = current->next;
        currentPosition++;
    }

    if (current) {
        if (current->prev) {
            current->prev->next = current->next;
        }
        else {
            head = current->next;
        }

        if (current->next) {
            current->next->prev = current->prev;
        }
        else {
            tail = current->prev;
        }

        delete current;
    }
}

template <typename T>
void List<T>::reverse() {
    Node* current = head;
    Node* temp = nullptr;

    while (current) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp) {
        head = temp->prev;
    }
}
