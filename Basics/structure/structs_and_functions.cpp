#include <iostream>
#include<string>
using namespace std;

struct Employee
{
    std::string name;
    short id;
    int age;
    double wage;
};

void printInformation(Employee employee)
{
    std::cout << "Name:   " << employee.name << "\n";
    std::cout << "ID:   " << employee.id << "\n";
    std::cout << "Age:  " << employee.age << "\n";
    std::cout << "Wage: " << employee.wage << "\n";
}

int main()
{
    Employee satyam = { "Satyam Singh" , 14, 32, 24.15 };
    Employee kanika = { "Kanika Mittal" , 15, 28, 18.27 };

    //print Employee's information
    std::cout << "Printing Employee's information :" << '\n';
    std::cout << '\n';

    // Print Satyam's information
    printInformation(satyam);

    std::cout << "\n";

    // Print Kanika's information
    printInformation(kanika);

    return 0;
}
