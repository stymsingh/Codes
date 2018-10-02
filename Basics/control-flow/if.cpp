#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;

    if (x > 10)
        {
        // both statements will be executed if x > 10
        std::cout << "You entered " << x << "\n";
        std::cout << x << " is greater than 10\n";
        }
    else
        {
        // both statements will be executed if x <= 10
        std::cout << "You entered " << x << "\n";
        std::cout << x << " is not greater than 10\n";
        }

    return 0;
}
