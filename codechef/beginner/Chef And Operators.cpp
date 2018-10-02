/* codechef problem code : CHOPRT*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    std::cout << "test cases: " << '\n';
	cin>>t;
	while(t--)
	{
        int a, b;
        std::cout << "enter the two numbers: " << '\n';
        cin>> a>> b;
        if(a > b){
            std::cout << ">" << '\n';
        }
        else if(a < b){
            std::cout << "<" << '\n';
        }
        else{
            std::cout << "=" << '\n';
        }

	}
    return 0;
}
