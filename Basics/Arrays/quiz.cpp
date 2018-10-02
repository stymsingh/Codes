/****************

Given the array in question 1:

Ask the user for a number between 1 and 9. If the user does not enter a number between 1 and 9,
repeatedly ask for a number until they do. Once they have entered a number between 1 and 9,
print the array. Then search the array for the number that the user entered and print the index of that element.

**************/

#include <iostream>

int main()
{
    // First, read in valid input from user
    int number = 0;
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> number;

        // if the user entered an invalid character
        if (std::cin.fail())
            std::cin.clear(); // reset any error flags

        std::cin.ignore(32767, '\n'); // ignore any extra characters in the input buffer

    } while (number < 1 || number > 9);

    // Next, print the array
    int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    const int arrayLength = sizeof(array) / sizeof(array[0]);

    for (int index=0; index < arrayLength; ++index)
        std::cout << array[index] << " ";

    std::cout << "\n";

    // Then, search the array to find the matching number and print the index
    for (int index=0; index < arrayLength; ++index)
    {
        if (array[index] == number)
        {
            std::cout <<  "The number " << number << " has index " <<  index << "\n";
            break; // since each # in the array is unique, no need to search rest of array
        }
    }

    return 0;
}
