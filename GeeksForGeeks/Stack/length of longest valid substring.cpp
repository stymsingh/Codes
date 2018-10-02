#include<bits/stdc++.h>
using namespace std;
int findMaxLen(string s)
{
    int l = s.length();
    stack<int>st;
    st.push(-1);
    int result=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(')
            st.push(i);
        else
            {
                st.pop();
                if(!st.empty())
                    result = max(result, i-st.top());
                else
                    st.push(i);

            }
    }return result;

}
int main()
{
    string str = "((()()";
    cout << findMaxLen(str) << endl;

    str = "()(()))))";
    cout << findMaxLen(str) << endl ;

    return 0;
}
