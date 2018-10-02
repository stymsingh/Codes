#include<bits/stdc++.h>
using namespace std;

/*****************************************/

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;

    // create temp array
    int L[n1];
    int R[n2];

    // copy data to these temp ararys
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

    /* Merge the temp arrays back into arr[l..r]*/
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

/*****************************************/
void merge_sort(int arr[], int l, int r)
{
    // Base Case
    if (l < r)
   {
       // Same as (l+r)/2, but avoids overflow for
       // large l and h
       int m = l+(r-l)/2;

       // Sort first and second halves
       merge_sort(arr, l, m);
       merge_sort(arr, m+1, r);

       merge(arr, l, m, r);
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
   int arr[] = {12, 11, 13, 5, 6, 7};
   int n = sizeof(arr)/ sizeof(arr[0]);

   /**** Printing before swapping occurs*/
   std::cout << "Before swapping: ";
   printArray(arr, n);

   // fucntion call
   merge_sort(arr,0,n-1);

    /**** Printing After swapping occurs*/
   std::cout << "After swapping: ";
   printArray(arr, n);
   return 0;
}
