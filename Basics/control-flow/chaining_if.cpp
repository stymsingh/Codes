#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;

    if (x > 10)
        std::cout << x << "is greater than 10\n";
    else if (x < 10)
        std::cout << x << "is less than 10\n";
    else
        std::cout << x << "is exactly 10\n";

    return 0;
}
