#include<bits/stdc++.h>
using namespace std;
bool arePair(char opening, char closing )
{
    if(opening == '(' && closing == ')')
        return true;
    else if(opening == '{' && closing == '}')
        return true;
    else if(opening == '[' && closing == ']')
        return true;
    else
        return false;
}

bool areParanthesisBalanced(string exp)
{
    stack<char> st;
    int len = exp.length();
    for(int i=0;i<len;i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{' )
            st.push(exp[i]);
        else if( exp[i] == ')' || exp[i] == ']' || exp[i] == '}' )
        {
            if(st.empty() || !arePair(st.top(),exp[i]))
                return false;
            st.pop();
        }

    }
    return st.empty()?true:false;
}

int main()
{
    char expr[]="{()}[]";

    if(areParanthesisBalanced(expr))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    return 0;
}
