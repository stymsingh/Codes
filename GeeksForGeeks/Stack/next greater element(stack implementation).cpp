#include<bits/stdc++.h>
using namespace std;
void printNGE(int arr[], int n)
{
    int i=0;
    int x;
    stack<int>st;
    st.push(arr[0]);
    int next;
    for(int j=1;j<n;j++)
    {
        next = arr[i];
        if(!st.empty())
        {
            x = st.pop();
            while(next > x)
              std::cout << x <<"-->" << next << '\n';
            else
              st.push(next);
        }

    }
    while(!st.empty())
    {
        int x = st.pop();
        next = -1;
        std::cout << x <<"-->" << next << '\n';
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
