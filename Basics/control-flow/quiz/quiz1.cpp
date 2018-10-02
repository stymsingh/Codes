/********

) Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all
 the numbers from 1 to value.

For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.

********/

#include<iostream>
using namespace std;

int sumTo(int a)
{
  int num = 0;
  for (int i = 1 ; i <= a ; i++)
  {
    num = num + i;
  }
  return num;
}

int main()
{
  int n;
  std::cout << "enter the number : " << '\n';
  std::cin >> n;a
  int result = sumTo(n);
  std::cout << "result is : " << result << '\n';
  return 0;
}
