#include<bits/stdc++.h>
using namespace std;

void reverse(char* str, int len)
{
  stack<char> s;

  //push into  stack
  for(int i=0;i<len;i++)
    s.push(str[i]);

  //pop from the stack
  for(int i=0;i<len;i++)
  {
    str[i] = s.top();
    s.pop();
  }
}

int main()
{
    char str[] = "GeeksQuiz";
    int len = strlen(str);
    reverse(str, len);
    printf("Reversed string is %s", str);

    return 0;
}
