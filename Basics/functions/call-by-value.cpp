#include<iostream>
using namespace std;

//call-by value approach
int add(int x, int y)
{
  x = 8;
  y = 9;
  printf("%d\n",x);
  printf("%d\n",y);
}
int main()
{
  int x{4}, y{4};
  printf("%d\n",x );
  printf("%d\n",y );
  add(x,y);
  printf("%d\n",x );
  printf("%d\n",y );
}
