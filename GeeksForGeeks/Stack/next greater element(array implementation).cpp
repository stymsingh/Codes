#include<bits/stdc++.h>
using namespace std;
int printNGE(int a[], int size)
{
    int i, j;
    int next=-1;
    for(i =0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[j]>a[i])
            {
                next= a[j];
                break;

            }
            else
            {
                next = -1;
            }
        }
        std::cout << "next greater element is: " << next<< '\n';
    }
}
int main()
{
    int arr[]= {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr, n);
    getchar();
    return 0;
}
