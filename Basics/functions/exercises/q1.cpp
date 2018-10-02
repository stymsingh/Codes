/***

 A function named sumTo() that takes an integer parameter and returns the sum of all the numbers
 between 1 and the input number.

***/


#include<iostream>
using namespace std;
int sumTo(int n)
{
  int sum = 0;
  for(int i=n;i>=1;--i)
  {
    sum = sum + i;
  }
  return sum;
}
int main()
{
  int num;
  std::cout << "enter number: ";
  std::cin >> num;
  std::cout << "the sum of all numbers is: " << sumTo(num) << '\n';
  return 0;
}
