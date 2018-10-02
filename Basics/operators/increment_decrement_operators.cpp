#include<iostream>
using namespace std;
int main()
{
  // Example 1
  // int x(5);
  // int y(x++);
  // int z(++x);
  // std::cout << "x is:" << x <<'\n';
  // std::cout << "y is:" << y <<'\n';
  // std::cout << "z is:" << z <<'\n';

  // Example 2
  int x = 5, y = 5;
  cout << x << " " << y << endl;
  cout << ++x << " " << --y << endl; // prefix
  cout << x << " " << y << endl;
  cout << x++ << " " << y-- << endl; // postfix
  cout << x << " " << y << endl;
  return 0;
}
