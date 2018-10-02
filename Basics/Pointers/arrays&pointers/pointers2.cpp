#include <iostream>

int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };
        std::cout << *array; // will print 9

        int *ptr = array;
        std::cout << *ptr; // will print 9

	return 0;
}
