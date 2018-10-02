/*************

You are given  integers.Sort the  integers and print the sorted order.
Store the  integers in a vector.Vectors are sequence containers representing arrays that can change in size.

Input Format

The first line of the input contains  where  is the number of integers. The next line contains  integers.
Constraints

, where  is the  integer in the vector.

Output Format

Print the integers in the sorted order one by one in a single line followed by a space.

Sample Input

5
1 6 10 8 4
Sample Output


************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int size, input;
  cin>>size;
  std::vector<int> v;
  for(int i=0;i<size;i++)
  {
    cin>>input;
    v.push_back(input);
  }
  std::sort(v.begin(),v.end());
  for(int i=0;i<size;i++)
  {
    std::cout << v[i]<<" " ;
  }

}
