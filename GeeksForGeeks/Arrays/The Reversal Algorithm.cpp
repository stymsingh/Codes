#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
  int temp;
  while(start<end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void rotate(int arr[], int d, int n)
{
  reverseArray(arr, 0, d-1);
  reverseArray(arr, d, n-1);
  reverseArray(arr, 0, n-1);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << '\n';
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    rotate(arr, d, n);
    printArray(arr, n);
    return 0;
}
