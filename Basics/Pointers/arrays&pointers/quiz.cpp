/**************

Declare a fixed array with the following names: Alex, Betty, Caroline, Dave, Emily, Fred, Greg, and Holly. Ask the user
to enter a name. Use a for each loop to see if the name the user entered is in the array.

Sample output:

Enter a name: Betty
Betty was found.
Enter a name: Megatron
Megatron was not found.


**************/

#include <iostream>
#include <string>

int main()
{
    const std::string names[] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

    std::cout << "Enter a name: ";
    std::string username;
    std::cin >> username;

    bool found(false);
    for (const auto &name : names)
        if (name == username)
        {
            found = true;
            break;
        }

    if (found)
        std::cout << username << " was found.\n";
    else
        std::cout << username << " was not found.\n";

    return 0;
}
