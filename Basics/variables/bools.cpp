#include<iostream>
using namespace std;
int main()
{
  bool b1= true;
  bool b2{false};
  bool b3(false);
  b3 = true;
  std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl;

  /* using bools with if-else*/
  if(b2)
  {
    std::cout << "code" << '\n';
  }
  else{
    std::cout << "google" << '\n';
  }
  return 0;
}
