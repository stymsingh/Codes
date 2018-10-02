/****

When a pointer is dereferenced, the application attempts to go to the memory location that is stored
in the pointer and retrieve the contents of memory. For security reasons, modern operating systems
sandbox applications to prevent them from improperly interacting with other applications, and to protect
the stability of the operating system itself. If an application tries to access a memory location not allocated
to it by the operating system, the operating system may shut down the application.

*****/

#include <iostream>

void foo(int *&p)
{
}

int main()
{
    int *p; // Create an uninitialized pointer (that points to garbage)
    foo(p); // Trick compiler into thinking we're going to assign this a valid value

    std::cout << *p; // Dereference the garbage pointer

    return 0;
}
