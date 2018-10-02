/***

A function named minmax() that takes two integers as input and returns the smaller and larger
number as separate parameters.

***/

#include<iostream>
using namespace std;
int minmax( int a, int b)
{
  if(a>b)
  {
    std::cout << "larger number: " << a << '\n';
    std::cout << "smaller number: " << b << '\n';
  }
  else
  {
    std::cout << "larger number: " << b << '\n';
    std::cout << "smaller number: " << a << '\n';
  }
}
int main()
{
  int num1 , num2;
  std::cout << "enter numbers: ";
  std::cin >> num1 >> num2;
  minmax(num1, num2) ;
  return 0;
}
