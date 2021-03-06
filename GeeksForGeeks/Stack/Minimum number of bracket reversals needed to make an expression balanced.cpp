#include<bits/stdc++.h>
using namespace std;
int countMinReversals(string expr)
{
    int len = expr.length();
    if (len%2)
       return -1;
    stack<char> s;
    for (int i=0; i<len; i++)
    {
        if (expr[i]=='}' && !s.empty())
        {
            if (s.top()=='{')
                s.pop();
            else
                s.push(expr[i]);
        }
        else
            s.push(expr[i]);
    }

    // Length of the reduced expression
    // red_len = (m+n)
    int new_len = s.size();

    // count opening brackets at the end of
    // stack
    int n = 0;
    while (!s.empty() && s.top() == '{')
    {
        s.pop();
        n++;
    }

    // return ceil(m/2) + ceil(n/2) which is
    // actually equal to (m+n)/2 + n%2 when
    // m+n is even.
    return (new_len/2 + n%2);
}
int main()
{
   string expr = "}}{{";
   cout << countMinReversals(expr);
   return 0;
}
