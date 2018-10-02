/*********

Now make the numbers print like this:

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1


********/

#include <iostream>

int main()
{
	// There are 5 rows, we can loop from 1 to 5
	int outer = 1;

	while (outer <= 5)
	{
		// Row elements appear in descending order, so start from 5 and loop through to 1
		int inner = 5;

		while (inner >= 1)
		{
			// The first number in any row is the same as the row number
			// So number should be printed only if it is <= the row number, space otherwise
			if (inner <= outer)
				std::cout << inner << " ";
			else
				std::cout << "  "; // extra spaces purely for formatting purpose

			--inner;
		}

		// A row has been printed, move to the next row
		std::cout << "\n";

		++outer;
	}
}
