#include<bits/stdc++.h>
using namespace std;

/*********************************************/
//Program to implement getInversionCount()
/*********************************************/

/*For each element, count number of elements which are on right side of it and are smaller than it*/
int getInversionCount(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
                count++;
        }
    }return count;
}
/**********************************************/
void printArray(int arr[], int size)
{
    if(size==0) return;
    for (int i=0; i < size; i++)
        std::cout << arr[i]<<" ";
    std::cout <<'\n';
}

/**********************************************/
int main(void)
{
   int arr[] = { 1, 20, 6, 4, 5};
   int n = sizeof(arr)/ sizeof(arr[0]);

   /**** Printing before swapping occurs*/
   std::cout << "Before swapping: ";
   printArray(arr, n);

   // fucntion call
   std::cout << getInversionCount(arr, n) << '\n';

    /**** Printing after swapping occurs*/
   std::cout << "After swapping: ";
   printArray(arr, n);
   return 0;
}
