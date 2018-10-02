/******
Write a program that asks the user to enter their full name and their age. As output, tell the user how many years they’ve lived for each letter in their name (for simplicity, count spaces as a letter).

Sample output:

Enter your full name: John Doe
Enter your age: 46
You've lived 5.75 years for each letter in your name.
********/

#include<iostream>
#include<string>
using namespace std;

int main()
{
  std::string name;
  std::getline(std::cin , name);

  int age;
  std::cout << "Enter age : ";
  std::cin >> age;

  double letters = name.length();
  double ageletters = static_cast<double>(age) / letters ;
  std::cout << "You've lived " << ageletters <<" years for each letter in your name." << '\n';
  return 0;
}
