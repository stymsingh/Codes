#include<iostream>
using namespace std;

// returns the value nBase ^ nExp
int pow(int base, int exponent)
{
    int total = 1;

    for (int count=0; count < exponent; ++count)
        total *= base;

    return total;
}

int main()
{
  int base, exponent;
  std::cout << "Enter base and exponent : ";
  std::cin >> base;
  std::cin >> exponent;
  int power = pow(base, exponent);
  std::cout << "power result is : " << power << '\n';

  return 0;
}
