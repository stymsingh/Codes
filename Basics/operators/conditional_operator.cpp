#include<iostream>
using namespace std;
int main()
{
  int x{5};
  int y{7};
  int larger;
  // if-else approach
  if (x > y)
    larger = x;
  else
    larger = y;
  std::cout << larger << '\n';

  //conditional operator
  larger = (x > y) ? x : y;
  std::cout << larger << '\n';
}
