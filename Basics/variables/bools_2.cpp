/*

  std::boolalpha isusd to print true for 1, and false for 0;

*/
#include <iostream>

int main()
{
    std::cout << true << std::endl;
    std::cout << false << std::endl;

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << true << std::endl;
    std::cout << false << std::endl;
    return 0;
}
