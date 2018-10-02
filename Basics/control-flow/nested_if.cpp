#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;

    if (x > 10) // outer if statement
    {
      if (x < 20) // inner if statement
          std::cout << x << " is between 10 and 20\n";

      // which if statement does this else belong to?
      else
          std::cout << x << " is greater than 20\n";
    }

    else
    {
       std::cout << "x is smaller than 10" << '\n';
    }
    return 0;
}
