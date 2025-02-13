#include "String.h"

int main() {
    String str1;
    str1.output();

    String str2(20);
    str2.input();
    str2.output();

    String str3("Hello, World!");
    str3.output();

    String str4 = str3;
    str4.output();

    String str5 = str3 + str4;
    str5.output();

    str3 += str4;
    str3.output();

    if (str3 == str4) {
        std::cout << "str3 is equal to str4." << std::endl;
    }

    if (str3 != str5) {
        std::cout << "str3 is not equal to str5." << std::endl;
    }

    if (str5 > str4) {
        std::cout << "str5 is longer than str4." << std::endl;
    }

    if (str4 < str5) {
        std::cout << "str4 is shorter than str5." << std::endl;
    }

    std::cout << str3[5] << std::endl;

    return 0;
}
