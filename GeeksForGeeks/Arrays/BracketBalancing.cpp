#include<bits/stdc++.h>
using namespace std;
int balance(string s)
{
  std::vector<int> pos;
  for(int i=0;i<s.length();i++)
  if(s[i]=='[')
    pos.push_back(i);

  int count;
  int p=0;
  long sum = 0;

  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='[')
    {
      ++count;
      ++p;
    }
    else if (s[i]==']')
      --count;

    if(count<0)
    {
      sum += pos[p] - i;
    }
  }
}
