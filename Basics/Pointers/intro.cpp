#include <iostream>

int main()
{
    int value = 5;
    int *ptr = &value; // initialize ptr with address of variable value

    std::cout << &value << '\n'; // print the address of variable value
    std::cout << ptr << '\n'; // print the address that ptr is holding
    std::cout << *(&value) << '\n';//print the value located at that address
    return 0;
}
