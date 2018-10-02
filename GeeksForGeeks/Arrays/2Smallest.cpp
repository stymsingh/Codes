////////////////////////////////////////////////////////

/*Find smallest and second smallest elements of an array*/

/////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
int print2Smallest(int arr[], int n)
{
  if(n<2)
  {
    std::cout << "invalid size" << '\n';
  }
  int first, second;
  first = second = INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(arr[i]<first)
    {
      second = first;
      first = arr[i];
    }
    else if(arr[i] < second && arr[i] != first)
      second = arr[i];
  }
  if(second == INT_MAX)
    std::cout << "no second element" << '\n';
  else
    std::cout << "smallest element is: "<<first <<" and second smallest is: "<<second << '\n';
}
int main()
{
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    print2Smallest(arr, n);
    return 0;
}
