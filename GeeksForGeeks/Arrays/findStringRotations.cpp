#include<bits/stdc++.h>
using namespace std;
int findRotations(string str)
{
  // here result is the count of rotations
  int result=0;
  string str_copy = str + str;
  int len = str.length();
  std::cout << "new string is: " <<str_copy << '\n';
  for(int i =1;i<=len;i++)
  {
    string substring = str_copy.substr(i, str.size());
    if(str == substring)
     return i;
  }
  return len;
}

int main()
{
    string str = "abc";
    cout << findRotations(str) << endl;
    string str2 = "satyam";
    cout << findRotations(str2) << endl;
    return 0;
}
