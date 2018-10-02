/********

program to find the sum of array elemnts

********/


#include<iostream>
using namespace std;
int score(int a[5], int len)
{
  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum += a[i];
  }
  return sum;
}

int main()
{
  int a[5] = {1,2,3,4,5};
  std::cout << "Array contains : " << '\n';
  int len = sizeof(a)/sizeof(a[0]);
  for (int i = 0; i < len; i++) {
    std::cout << a[i] << '\t';
  }
  int total_sum = score(a, len);
  std::cout << "\nTotal sum of all elements : " << total_sum <<'\n';
  return 0;
}
