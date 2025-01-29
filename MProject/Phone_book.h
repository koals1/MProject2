class PhoneBook {
public:
    struct Contact {
        char* fullName;
        char homePhone[15];
        char workPhone[15];
        char mobilePhone[15];
        char additionalInfo[100];

        Contact(const char* fullName, const char* homePhone, const char* workPhone,
            const char* mobilePhone, const char* additionalInfo);
        ~Contact();
    };

private:
    Contact** contacts;
    int contactCount;

public:
    PhoneBook();
    ~PhoneBook();

    void addContact(const char* fullName, const char* homePhone, const char* workPhone,
        const char* mobilePhone, const char* additionalInfo);
    void deleteContact(const char* fullName);
    Contact* searchContact(const char* fullName);
    void showAllContacts();

    bool compareStrings(const char* str1, const char* str2);
    int getStringLength(const char* str);
};
