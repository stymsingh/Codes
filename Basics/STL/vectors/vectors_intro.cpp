#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  std::vector<int> array;
  array = {1,2,3,4,5,6};

  //accesing vector elements
  for(auto const &num : array)
  {
    std::cout << "vector contains : " << num <<'\n';
  }

  //resizing the vector to hold 3 values aand printing it
  array.resize(3);
  array = {9,7,8};
  for(auto const &num : array)
  {
    std::cout << "vector contains : " << num <<'\n';
  }

  //sorting the vector and printing it
  std::sort(array.begin(), array.end());
  for(auto const &num : array)
  {
    std::cout << "\nsorted vector contains : " << num ;
  }

  //printing the length of the vector
  std::cout << "\nThe length of vector is : " << array.size() << '\n';

  return 0;
}
