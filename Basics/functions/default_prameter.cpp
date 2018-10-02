#include<iostream>
using namespace std;
void printValues(int x, int y=10)
{
  std::cout << "x is: "<< x << '\n';
  std::cout << "y is: "<< y << '\n';
}
int main()
{
  int num;
  std::cout << "enter the number: ";
  std::cin >> num;
  printValues(num);
}
