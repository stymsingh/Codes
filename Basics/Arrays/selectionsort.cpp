/********

program to perform selection sort on the Array
in descending order

********/

#include <algorithm> // for std::swap, use <utility> instead if C++11
#include <iostream>

int main()
{
	const int length = 5;
	int a[length] = { 30, 50, 20, 10, 40 };

	std::cout << "Original Array:  " << '\n';
  for (int i = 0; i < length; i++)
  {
      std::cout << a[i] << " " ;
  }

  for(int i = 0; i<length-1 ;++i)
  {
    int large = i;
    for(int j = i+1; j<length ;++j)
    {
      if(a[j]> a[large])
      large = j;
    }
    std::swap(a[i],a[large]);
  }
	std::cout << "\nsorted array : " << '\n';
  for (int i = 0; i < length; i++)
  {
      std::cout << a[i] << " " ;
  }

 return 0;
}
