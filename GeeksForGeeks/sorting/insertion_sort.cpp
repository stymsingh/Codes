#include<bits/stdc++.h>
using namespace std;

/*****************************************/
//Program to implement Insertion Sort
/*****************************************/

void insSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
/********************************************/
void printArray(int arr[], int size)
{
    if(size==0) return;
    for (int i=0; i < size; i++)
        std::cout << arr[i]<<" ";
    std::cout <<'\n';
}

/********************************************/
int main(void)
{
   int arr[] = { 5,  2 , 2 , 8  ,5 , 6 , 8,  8};
   int n = sizeof(arr)/ sizeof(arr[0]);

   /**** Printing before swapping occurs*/
   std::cout << "Before swapping: ";
   printArray(arr, n);

   // fucntion call
   insSort(arr, n);

    /**** Printing after swapping occurs*/
   std::cout << "After swapping: ";
   printArray(arr, n);
   return 0;
}
