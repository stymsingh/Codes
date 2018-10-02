#include<bits/stdc++.h>
using namespace std;

/*****************************************/
void swap(int* one, int* two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}

/*****************************************/
void sel_sort(int arr[], int len)
{
    for(int i=0;i<len-1;i++)
    {
        int min_idx = i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[j]< arr[min_idx])
                min_idx = j;
        }swap(&arr[min_idx],&arr[i]);

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
   int arr[] = {64, 25, 12, 22, 11};
   int n = sizeof(arr)/ sizeof(arr[0]);

   /**** Printing before swapping occurs*/
   std::cout << "Before swapping: ";
   printArray(arr, n);

   // fucntion call
   sel_sort(arr, n);

    /**** Printing before swapping occurs*/
   std::cout << "After swapping: ";
   printArray(arr, n);
   return 0;
}
