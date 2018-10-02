#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
  for(int i=0;i<n;i++)
    std::cout << arr[i] << '\n';
}

//modified insertion sort
int ins_sort(int arr[], int n)
{
  int key;
  for(int i=1;i<n-1;i++)
  {
    if(arr[i]>0)
      continue;
    int j =i-1;
    while (j>=0 && arr[j]>0) {
      arr[j+1] = arr[j];
      j = j-1;
    }
    arr[j+1] = key;
  }
}


int main()
{
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    RearrangePosNeg(arr, n);
    printArray(arr, n);

    return 0;
}
