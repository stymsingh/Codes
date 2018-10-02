/*****

A function named printEmployeeName() that takes an Employee struct as input.

****/

#include<iostream>
#include<string>
using namespace std;
struct Employee
{
  int id;
  std::string name;
};
int printEmployeeName(Employee emps)
{
  std::cout << "name: "<<emps.name << '\n';
  std::cout << "id: "<<emps.id << '\n';
}
int main()
{
  Employee emp;
  emp = {1, "satyam singh"};
  printEmployeeName(emp);

  Employee emp2;
  emp2 = {2, "kanika mittal"};
  printEmployeeName(emp2);
  return 0;
}
