/*** global scope

#include <iostream>

void incrementAndPrint()
{
    int value = 1; // automatic duration by default
    ++value;
    std::cout << value << std::endl;
} // value is destroyed here

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    return 0;
}
           *******/



/******** static **********/
#include <iostream>

void incrementAndPrint()
 {
    static int s_value = 1; // static duration via static keyword.  This line is only executed once.
    ++s_value;
    std::cout << s_value << std::endl;
 }  // s_value is not destroyed here, but becomes inaccessible

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    return 0;
}
