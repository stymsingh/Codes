/*
Write a function called doubleNumber() that takes one integer parameter and returns twice the value passed in.
*/

#include<iostream>
using namespace std;
int doubleNumber(int);

int main()
{
  int num;
  std::cout << "enter the number: " << '\n';
  std::cin >> num;
  int outputNumber = doubleNumber(num);
  std::cout << outputNumber << '\n';
  return 0;
}

int doubleNumber(int number)
{
  return (number*number);
}
