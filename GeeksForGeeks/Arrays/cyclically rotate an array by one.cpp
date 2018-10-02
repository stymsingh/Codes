/****
Given array is
1 2 3 4 5

Rotated array is
5 1 2 3 4
****/

/****
Time Complexity: O(n)
Auxiliary Space: O(1)
****/
#include<bits/stdc++.h>
using namespace std;
void clockwise_rotate(int arr[],int n)
{
  int temp= arr[n-1];
  for (i = n-1; i > 0; i--)
      arr[i] = arr[i-1];
  arr[0]=temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << "Given array is: ";
    for (i = 0; i < n; i++)
        std::cout << arr[i] <<"\t" ;
    //std::cout << "\nGiven array size is: "<< n;

    clockwise_rotate(arr, n);


    std::cout << "\nRotated array is: " << '\n';
    for (i = 0; i < n; i++)
          std::cout << arr[i];

    return 0;
}
