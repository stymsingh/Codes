#include <iostream>

// parameter ptr contains a copy of the array's address
void changeArray(int *ptr)
{
    *ptr = 5; // so changing an array element changes the _actual_ array
}

int main()
{
    int array[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
    std::cout << "Element 0 has value: " << array[0] << '\n';

    changeArray(array);

    std::cout << "Element 0 has value: " << array[0] << '\n';

     return 0;
}


/*********
reason for the o/p:

When changeArray() is called, array decays into a pointer, and the value of that pointer (the memory address
of the first element of the array) is copied into the ptr parameter of function changeArray(). Although the
value in ptr is a copy of the address of the array, ptr still points at the actual array (not a copy!).
Consequently, when ptr is dereferenced, the actual array is dereferenced!

**********/
