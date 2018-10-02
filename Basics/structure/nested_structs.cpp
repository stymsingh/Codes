#include<iostream>
#include<string>
using namespace std;

struct Employee
{
  std::string name;
  short id;
  int age;
  double wage;
};

struct Company
{
   Employee CEO;
   int numberOfEmployees;
};

void print(Company x)
{
  std::cout << "Company's CEO is :  "<< x.CEO.name << '\n';
}
int main()
{
  Company x = {{"satyam singh", 1, 20,2564},564};
  print(x);
  return 0;

}
