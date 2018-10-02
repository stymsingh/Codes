#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

int main()
{
  std::array<int,6> myarray;
  myarray = {1,2,3,4,5,6};

  //accesing vector elements
  for(auto const &num : myarray)
  {
    std::cout << "array contains : " << num <<'\n';
  }

  //accessing values
  std::cout << "\narray element at location [4]: " << myarray.at(4) <<'\n';
  std::cout << "array element at location [1]: " << myarray.at(1) <<'\n';
  std::cout << "array element at location [4]: " << myarray[4] <<'\n';

  //sorting the std::array and printing it
  std::sort(myarray.begin(), myarray.end());
  for(auto const &num : myarray)
  {
    std::cout << "\nsorted array contains : " << num ;
  }

  //printing the length of the vector
  std::cout << "\n\nThe length of vector is : " << myarray.size() << '\n';

  return 0;
}
