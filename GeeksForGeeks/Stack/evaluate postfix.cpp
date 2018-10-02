#include<bits/stdc++.h>
using namespace std;
int operate(int a, int b, char op)
{
    switch (op) {
        case '+': return (a+b);
        case '-': return (a-b);
        case '*': return (a*b);
        case '/': return (a/b);
    }
    return -1;
}

int eval_postfix(char *s, int size)
{
    int val;
    stack<int> st;
    for(int i=0;i<size;++i)
    {
        char ch = s[i];
        if(isdigit(ch))
            st.push(s[i]-'0');
        else
        {
            int c2 = st.top();
            st.pop();
            int c1 = st.top();
            st.pop();
            val = operate(c1,c2,ch);

            st.push(val);
        }
    }
    return val;
}
int main() {
   char postfix[] ={'2','3','1','*','+','9','-'};
   int size = sizeof(postfix);
   int val = eval_postfix(postfix, size);
   std::cout<<"\nExpression evaluates to "<<val;
   std::cout<<endl;
   return 0;
}
