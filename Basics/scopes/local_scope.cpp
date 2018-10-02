#include <iostream>

int add(int x, int y) // x and y are created here
{
    // x and y are visible/usable within this function only
    return x + y;
} // x and y go out of scope and are destroyed here

int main()
{
    int a = 5; // a is created and initialized here
    int b = 6; // b is created and initialized here
    // a and b are usable within this function only
    std::cout << add(a, b) << std::endl; // calls function add() with x=a and y=b
    return 0;
} // a and b go out of scope and are destroyed here


/*
To enhance your understanding, let’s trace through this program in a little more detail. The following happens, in order:

    main() is executed
    main’s variable a is created and given value 5
    main’s variable b is created and given value 6
    function add() is called with values 5 and 6 for arguments
    add’s variable x is created and given value 5
    add’s variable y is created and given value 6
    operator + adds 5 and 6 to produce the value 11
    add returns the value 11 to the caller (main)
    add’s x and y are destroyed
    main prints 11 to the console
    main returns 0 to the operating system
    main’s a and b are destroyed

And we’re done.

*/
