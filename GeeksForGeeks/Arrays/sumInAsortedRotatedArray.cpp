#include<bits/stdc++.h>
using namespace std;
bool pairInSortedArray(int arr[], int n, int x)
{
  //find the pivot element
  for(int i=0;i<n-1;i++)
  {
    if(arr[i] > arr [i+1])
      break;
  }
  int l = (i+1)%n;// minimum element index
  int r = i; //highest  element index
  while(l!=r)
  {
    if(arr[l]+arr[r] == x)
      return true;
    // If current pair sum is less, move to the higher sum
    if (arr[l] + arr[r] < x)
      l = (l + 1)%n;
    else  // Move to the lower sum side
      r = (n + r - 1)%n;
  }
}
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int sum = 16;
    int n = sizeof(arr)/sizeof(arr[0]);

    if (pairInSortedRotated(arr, n, sum))
        cout << "Array has two elements with sum 16";
    else
        cout << "Array doesn't have two elements with sum 16 ";

    return 0;
}
