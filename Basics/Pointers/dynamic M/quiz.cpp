/******
Write a program that:
* Asks the user how many names they wish to enter.
* Asks the user to enter each name.
* Calls a function to sort the names (modify the selection sort code from lesson 6.4 -- Sorting an array using selection sort)
* Prints the sorted list of names.

Hint: Use a dynamic array of std::string to hold the names.
Hint: std::string supports comparing strings via the comparison operators < and >

Your output should match this:

How many names would you like to enter? 5
Enter name #1: Jason
Enter name #2: Mark
Enter name #3: Alex
Enter name #4: Chris
Enter name #5: John

Here is your sorted list:
Name #1: Alex
Name #2: Chris
Name #3: Jason
Name #4: John
Name #5: Mark
**********/
#include <iostream>
#include <string>
#include <utility> // for std::swap, if you're not C++11 compatible, #include <algorithm> instead

void sortArray(std::string *array, int length)
{
	// Step through each element of the array
	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we've encountered so far.
		int smallestIndex = startIndex;

		// Look for smallest element remaining in the array (starting at startIndex+1)
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// If the current element is smaller than our previously found smallest
			if (array[currentIndex] < array[smallestIndex])
				// This is the new smallest number for this iteration
				smallestIndex = currentIndex;
		}

		// Swap our start element with our smallest element
		std::swap(array[startIndex], array[smallestIndex]);
	}
}

int main()
{
	std::cout << "How many names would you like to enter? ";
	int length;
	std::cin >> length;

	// Allocate an array to hold the names
	std::string *names = new std::string[length];

	// Ask user to enter all the names
	for (int i = 0; i < length; ++i)
	{
		std::cout << "Enter name #" << i + 1 << ": ";
		std::cin >> names[i];
	}

	// Sort the array
	sortArray(names, length);

	std::cout << "\nHere is your sorted list:\n";
	// Print the sorted array
	for (int i = 0; i < length; ++i)
		std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';

	delete[] names; // don't forget to use array delete
        names = nullptr; // use 0 if not C++11

	return 0;
}
