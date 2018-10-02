#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    stack<int>st;
    stack<int>st2;
    while(t--)
    {
        int n , k;

        cout<<"no of friends: ";
        cin >> n;
        cout<<"no of friends to delete: ";
        cin >> k;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        for(int i = 0;i<n;i++){
            st.push(arr[i]);
        }

        // for(int i=0;i<n;i++){
        //     cout<<" "<< arr[i];
        // }

        std::cout << "popped values are: ";
        while(!st.empty()){
            int p = st.top();
            cout<< p <<" ";
            st.pop();
            st2.push(p);
        }

        std::cout << "\nPrinting the contents of stack 2: " << '\n';
        while(!st2.empty()){
            int a = st2.top(); st2.pop();
            int b = st2.top(); st2.pop();
            //std::cout << a <<" ";
            if(a < b){
                st2.push(b);
            }else{
                st2.push(a);
                st2.push(b);
            }

        }

        while(!st2.empty()){
            int t = st2.top();
            std::cout << t;
            st2.pop();
        }
 }
}
