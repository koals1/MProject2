template <typename T>
class List {
private:
    struct Node {
        T data;
        Node* prev;
        Node* next;
        Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}
    };

    Node* head;
    Node* tail;

public:
    List();
    ~List();

    void push_back(const T& value);
    void push_front(const T& value);
    void pop_back();
    void pop_front();
    T& back();
    T& front();
    void clear();
    bool isEmpty() const;

    int find(const T& value) const;
    void erase(int position);
    void reverse();
};
