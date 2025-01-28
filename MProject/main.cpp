#include "Drib.h"

int main()
{
    Drib firstFraction, secondFraction;

    firstFraction.input();
    secondFraction.input();

    Drib resPlus = firstFraction.plus(secondFraction);
    Drib resMinus = firstFraction.minus(secondFraction);
    Drib resMultiply = firstFraction.multiply(secondFraction);
    Drib resDivide = firstFraction.divide(secondFraction);

    std::cout << "Sum: ";
    resPlus.output();

    std::cout << "Difference: ";
    resMinus.output();

    std::cout << "Product: ";
    resMultiply.output();

    std::cout << "Quotient: ";
    resDivide.output();

    return 0;
}
