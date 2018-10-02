#include<bits/stdc++.h>
using namespace std;
int getWeight(char ch)
{
    switch (ch) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
    }
    return -1;
}

void infixToPostfix(string s)
{
    stack<char>st;
    int i;
    int len = s.length();
    string ns;
    for(i=0;i<len;i++)
    {
        // If the scanned character is an operand, add it to output string.
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
            ns+=s[i];

        else if(s[i]=='(')
            st.push(s[i]);

        else if(s[i]==')')
        {
            while(!st.empty() && st.top() !='(')
            {
                char c = st.top();
                st.pop();
                ns +=c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
        else //an operator
        {
            while(!st.empty() && getWeight(s[i]) <= getWeight(st.top()))
            {
                char c = st.top();
                st.pop();
                ns+=c;
            }
            st.push(s[i]);
        }
    }
    //removing the remaining operators from the stack

    while(!st.empty())
    {
        char c= st.top();
        st.pop();
        ns+=c;
    }
    std::cout << "the new string is: " << ns << '\n';
}

int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    return 0;
}
