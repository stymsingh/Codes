#include <iostream>

int main()
{
    int array[5] = { 9, 7, 5, 3, 1 };

    // print the value of the array variable
    std::cout << "The array has address: " << array << '\n';

    // print address of the array elements
    std::cout << "Element 0 has address: " << &array[0] << '\n';

    return 0;
}

/****

o/p indicates that the address held by the array variable is the address of the first element of the array.

****/
