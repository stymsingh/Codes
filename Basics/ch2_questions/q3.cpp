/***

Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 7
Enter a double value: 5
Enter one of the following: +, -, *, or /: *
7 * 5 is 35

***/

#include<iostream>
using namespace std;

int main()
{
  double b;
  double a;
  char op;
  std::cout << "enter a and b" << '\n';
  std::cin >> a >> b;
  std::cout << "enter one of these (+ , - , * ,/)" << '\n';
  std::cin >> op;
  if(op == '+')
  {
    int result = a+b;
    std::cout << result << '\n';
  }
  if(op == '-')
  {
    int result = a+b;
    std::cout << result << '\n';
  }
  if(op == '*')
  {
    int result = a+b;
    std::cout << result << '\n';
  }
  if(op == '/')
  {
    int result = a+b;
    std::cout << result << '\n';
  }
  return 0;
}
