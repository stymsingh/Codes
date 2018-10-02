/******

Create a struct to hold a fraction. The struct should have an integer numerator and an integer denominator member.
Declare 2 fraction variables and read them in from the user. Write a function called multiply that takes both fractions,
multiplies them together, and prints the result out as a decimal number. You do not need to reduce the fraction to its
lowest terms.

*******/

#include <iostream>

struct Fraction
{
    int numerator;
    int denominator;
};

void multiply(Fraction f1, Fraction f2)
{
    /* question asks to give thr=e result as a decimal value*/
    std::cout << static_cast<float>(f1.numerator * f2.numerator) /
        (f1.denominator* f2.denominator);
}

int main()
{
    // Allocate our first fraction
    Fraction f1;
    std::cout << "Input the first numerator: ";
    std::cin >> f1.numerator;
    std::cout << "Input the first denominator: ";
    std::cin >> f1.denominator;

    // Allocate our second fraction
    Fraction f2;
    std::cout << "Input the second numerator: ";
    std::cin >> f2.numerator;
    std::cout << "Input the second denominator: ";
    std::cin >> f2.denominator;

    multiply(f1, f2);

    return 0;
}
