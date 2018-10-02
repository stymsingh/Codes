#include<iostream>
#include<cstdlib> //for rand and srand
#include<ctime> // for  using system time as seed value

using namespace std;

main()
{
   srand(static_cast<unsigned int>(time (0)));
   for ( int c = 1 ; c <= 100 ; c++ )
   {
      int num = random();
      cout << num << "\t";

      //for printing purpose
      if((c %  5) == 0)
        std::cout <<'\n';
    }

   return 0;
}
