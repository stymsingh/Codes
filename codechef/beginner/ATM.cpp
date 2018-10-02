/* codechef problem code : HS08TEST*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter withdrawl amount: ";
    cin>>n;

    float i;
    cout<<"\nenter initial balance: ";
    cin>>i;

    double res;
    if(n %5 == 0 && i>(n+0.50)){
        res = i - (0.50 + n);
        cout<<setprecision (2) << fixed <<res;
    }
    else{
        std::cout << i << '\n';
    }

    return 0;

}
