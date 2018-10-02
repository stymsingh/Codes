#include<iostream>
#include<string>
using namespace std;

int main()
{
  std::string a("Satyam");
  std::string b(" singh");
  std::cout << a+b << '\n';
  a+=" Singh";
  std::cout << "Name is: " << a << '\n';
  std::cout << "Length of a is : " << a.length() << '\n';
  return 0;
}
