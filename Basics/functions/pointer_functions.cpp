#include<iostream>
using namespace std;
int foo()
{
  return 5;
}
int main()
{
  std::cout << "foo returned: " << foo() <<'\n';
  std::cout<<"foo's location in memory is: "<<foo <<"\n";
  std::cout<<"foo's actual location in memory is: "<< reinterpret_cast<void*>(foo);
  return 0;
}
