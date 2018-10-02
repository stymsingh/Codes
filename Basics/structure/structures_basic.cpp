#include<iostream>
#include<string>
using namespace std;
struct Students
{
  std::string name;
  int age;
  short id;
};

int main()
{
  Students satyam;
  /* method 1*/
  satyam.name ="Satyam Singh";
  satyam.age = 25;
  satyam.id  = 1;

  /* method 2*/
  satyam = {"Kanika Mittal", 25,1};

  std::cout << "Student name is : " << satyam.name <<'\n';
}
