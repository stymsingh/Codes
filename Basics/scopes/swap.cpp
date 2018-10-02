//swap using a temporary variable

#include<iostream>
using namespace std;
int swap( int a , int b)
{
  int temp;
  temp = a+b;
  b = temp-b;
  a = temp-b;
  std::cout << "swapped vales are : "<< a << "\t" << b << '\n';
}

int main()
{
  int a , b;
  std::cout << "enter two numbers : " << '\n';
  std::cin >> a >> b;
  if(b > a)
  {
    swap(a, b);
    return 0;
  }
}
