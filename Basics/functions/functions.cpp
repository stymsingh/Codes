#include<iostream>
using namespace std;

/* function declaration*/
int add(int, int);

int main()
{
  int a = 5;
  int b = 6;
  //function call
  std::cout << "sum of a and b is: " << add(a,b);
}

/* function definition*/
int add(int a, int b)
{
  return (a+b);
}
