#pragma once
class Collage {
private:
    char name[100];
    char contacts[100];

public:
    Collage(const char* name, const char* contacts);
    void show() const;
};


