#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    vector <int>::iterator i;
    for(i = v.begin();i!=v.end();++i){
        std::swap(v[i], v[i+1]);
    }

    vector <int>::iterator it;
    for(it = v.begin();it!=v.end();++it){
        cout<<*it;
    }


}
