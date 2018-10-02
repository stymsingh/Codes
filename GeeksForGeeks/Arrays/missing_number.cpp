//////////////////////////////////////////////////

/*approach 2: Total sum APPROACH*/

///////////////////////////////////////////////////
/**
#include<bits/stdc++.h>
using namespace std;
int  missing(int arr[], int n)
{
  int sum ;
  sum = (n+1)*(n+2)/2;
  for(int i=0;i<n;i++)
  {
    sum-=arr[i];
  }
  return sum;
}
int main()
{
  int arr[5] = {1,2,4,5,6};
  int return_val = missing(arr,5);
  std::cout << "the missing value is: "<< return_val << '\n';
  return 0;
}
**/

//////////////////////////////////////////////////

/*approach 2: XOR APPROACH*/

///////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
int missing(int a[], int n)
{
    int i;
    int x1 = a[0]; /* For xor of all the elements in array */
    int x2 = 1; /* For xor of all the elements from 1 to n+1 */

    for (i = 1; i< n; i++)
        x1 = x1^a[i];

    for ( i = 2; i <= n+1; i++)
        x2 = x2^i;

    return (x1^x2);
}
int main()
{
  int arr[5] = {1,2,4,5,6};
  int return_val = missing(arr,5);
  std::cout << "the missing value is: "<< return_val << '\n';
  return 0;
}
