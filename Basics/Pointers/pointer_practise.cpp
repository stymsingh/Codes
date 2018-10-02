/****
& operator always returns a pointers

*****/
#include <iostream>
#include <typeinfo>

int main()
{
  int value1 = 5;
  int value2 = 7;

  int *ptr;

  ptr = &value1; // ptr points to value1
  std::cout << "Old value :";
  std::cout << *ptr <<"\n"; // prints 5

  ptr = &value2; // ptr now points to value2
  std::cout << "New value :";
  std::cout << *ptr; // prints 7
  return 0;
}
