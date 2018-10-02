/* codechef problem code : ELEVSTRS*/
#include<bits/stdc++.h>
using namespace std;
int main() {

    long long int t;
    std::cout << "enter test cases: ";
    cin>>t;
    while(t--){
        long double n;
        cout<<"number of floors: ";
        cin>>n;
        long double v1, v2;
        cout<<"enter stairs velocity: ";
        cin >> v1;
        cout<<"enter elevator velocity: ";
        cin>>v2;
        if(v1 <= 0 || v2 <= 0 || n < 0)
            return 0;
        if((sqrt(2)*n)/v1 > (2*n)/v2)
            cout<<"Elevator"<<endl;
        else
            cout<<"Stairs"<<endl;
    }
    return 0;
}
