/*Basic structure of a c++ program*/

#include<iostream>
int main() //driving point
{
  //int x; is a declaration statement 
  int x;
  //x = 5; is an assignment statement. It assigns a value (5) to a variable (x).
  x = 5;
  /*

   std::cout << x; is an output statement. It outputs the value of x (which we
   set to 5 in the previous statement) to the screen.

  */
  std::cout << "x value is: " << x << std::endl;
  return 0;
}
