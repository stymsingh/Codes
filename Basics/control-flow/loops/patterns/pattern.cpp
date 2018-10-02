/*****
This program prints:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*****/

#include <iostream>

// Loop between 1 and 5
int main()
{
    int outer = 1;
    while (outer <= 5)
    {
        // loop between 1 and outer
        int inner = 1;
        while (inner <= outer)
            std::cout << inner++ << " ";

        // print a newline at the end of each row
        std::cout << "\n";
        ++outer;
    }

    return 0;
}
