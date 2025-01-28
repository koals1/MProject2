#include "Drib.h"


Drib::Drib(int num, int denom) {
    if (denom == 0) {
        numerator = 0;
        denominator = 1;
    }
    else {
        numerator = num;
        denominator = denom;
    }
}

void Drib::input() {
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;
    if (denominator == 0) denominator = 1;
}


void Drib::output() const {
    std::cout << numerator << "/" << denominator << std::endl;
}


Drib Drib::plus(const Drib& other) {
    int commonDenom = denominator * other.denominator;
    int newNumerator = numerator * other.denominator + other.numerator * denominator;
    return Drib(newNumerator, commonDenom);
}

Drib Drib::minus(const Drib& other) {
    int commonDenom = denominator * other.denominator;
    int newNumerator = numerator * other.denominator - other.numerator * denominator;
    return Drib(newNumerator, commonDenom);
}

Drib Drib::multiply(const Drib& other) {
    int newNumerator = numerator * other.numerator;
    int newDenominator = denominator * other.denominator;
    return Drib(newNumerator, newDenominator);
}

Drib Drib::divide(const Drib& other) {
    int newNumerator = numerator * other.denominator;
    int newDenominator = denominator * other.numerator;
    return Drib(newNumerator, newDenominator);
}
