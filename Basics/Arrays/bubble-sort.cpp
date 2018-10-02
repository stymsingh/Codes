/********

program to perform bubble sort on the Array
unoptimized approach

********/

#include <algorithm>
#include <iostream>

int main()
{
  const int length(9);
  int a[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

	std::cout << "Original Array: : " << '\n';
  for (int i = 0; i < length; i++)
  {
      std::cout << a[i] << " " ;
  }

  for(int i = 0; i<length-1 ;++i)
  {
    for(int j=i+1 ; j<length;j++)
    {
      if(a[i]>a[j])
      {
        std::swap(a[i],a[j]);
      }
    }
  }
	std::cout << "\nsorted array : " << '\n';
  for (int i = 0; i < length; i++)
  {
      std::cout << a[i] << " " ;
  }

 return 0;
}
