/****
& operator always returns a pointers

*****/
#include <iostream>
#include <typeinfo>

int main()
{
	int x(4);
	std::cout << typeid(&x).name();

	return 0;
}

/****

o/p here is  Pi (pointer to an int)

****/
