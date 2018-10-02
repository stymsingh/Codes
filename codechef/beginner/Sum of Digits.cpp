/* codechef problem code :  FLOW006*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    std::cout << "test cases: " << '\n';
	cin>>t;
	while(t--)
	{
     int num;
     std::cout <<"number: " << '\n';
     cin>>num;
     int digit ,sum=0;
     while(num>0)
     {
     	digit =num%10;
     	sum = sum+digit;
     	num/=10;
	 }
     std::cout << "sum is: " << '\n';
     cout<<sum<<endl;
	}

}
