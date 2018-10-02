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

/*
    ITERATIVE APPROACH
*/
void bub_sort(int arr[], int len)
{
    bool swapped;
    for(int i=0;i<len-1;i++)
    {
        swapped = false;
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j]> arr[j+1])
                swap(&arr[j],&arr[j+1]);
                swapped = true;
        }

        if(swapped == false)
            break;
    }
}

/*
    RECURSIVE APPROACH
*/
void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;

    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);

    // Largest element is fixed,
    // recur for remaining array
    bubbleSort(arr, n-1);
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
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr)/ sizeof(arr[0]);

   /**** Printing before swapping occurs*/
   std::cout << "Before swapping: ";
   printArray(arr, n);

   // fucntion call
   bub_sort(arr, n);

    /**** Printing after swapping occurs*/
   std::cout << "After swapping: ";
   printArray(arr, n);
   return 0;
}
