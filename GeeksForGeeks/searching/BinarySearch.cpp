#include<bits/stdc++.h>
using namespace std;
int bin_search(int arr[], int l , int r, int key)
{
  if(r>=l)
  {
    int mid = (l+r)/2;
    if(arr[mid]== key)
      return mid;
    else if(arr[mid]<key)
      return bin_search(arr, mid+1, r, key);
    else
      return bin_search(arr, l, mid-1, key);
  }
}
int main(void)
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   int result = bin_search(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;
}
