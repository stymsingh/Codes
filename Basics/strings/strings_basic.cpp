/*******
#include<iostream>
#include<string>
using namespace std;

int main()
{
  std::string name;
  std::string age("25");
  name = "Satyam";
  std::cout << "Name is : "<< name << '\n';
  std::cout << "Age is : "<< age << '\n';
}

********/

/***********
// cin approach (not preferred)
#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::cin >> name; // this won't work as expected since std::cin breaks on whitespace

    std::cout << "Enter your age: ";
    std::string age;
    std::cin >> age;

    std::cout << "Your name is " << name << " and your age is " << age;
}
***************/

// std::getline approach (preferred)
#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name); // read a full line of text into name

    std::cout << "Enter your age: ";
    std::string age;
    std::getline(std::cin, age); // read a full line of text into age

    std::cout << "Your name is " << name << " and your age is " << age;
}
