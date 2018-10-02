#include <iostream>
using namespace std;

int main() {
    /* Approach 1*/
   int n(5);
   std::cout << n << '\n';

    /* Approach 2*/
   int m = 5;
   std::cout << m << '\n';

     /* Approach 3*/
    int k{5};
    std::cout << k << '\n';


    /* general */
    int a = 5, b = 6;
    int c(7), d(8);
    int e{9}, f{10};
    std::cout << a << '\n' << b <<'\n'<< c << '\n'<< d << '\n' << e << '\n' << f << '\n';
    return 0;
}
