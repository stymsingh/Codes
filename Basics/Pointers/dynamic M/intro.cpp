#include<iostream>
using namespace std;
int main()
{
  /* new dynamically allocates memory fro an int
  and the memory returns the address of the int created*/
  int *ptr  = new int;
  *ptr = 7;
  std::cout << "Address of ptr is:" <<ptr << '\n';
  std::cout << "Value of ptr is:" <<(*ptr) << '\n';
  delete(ptr);
}
