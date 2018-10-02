#include<iostream>
using namespace std;

int main()
{
  char ch1(97);
  std::cout << ch1 << '\n';

  char ch2(98);
  std::cout << ch2 << '\n';

  char ch('5');
  std::cout << ch << '\n';

  //type casting
  char c(100);
  std::cout << "value is:" << c << '\n';
  std::cout << "New value is :" << static_cast<int>(c) << '\n';
}
