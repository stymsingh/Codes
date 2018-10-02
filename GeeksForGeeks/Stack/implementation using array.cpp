p#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack
{
  int top;
public:
  int a[MAX]; //maximum siz of stack;
  Stack() //constructor
  {
    top = -1;
  }
  bool push(int x);
  int pop();
  bool isEmpty();
};

bool Stack::push(int x)
{
  if(top >=MAX)
  {
    std::cout << "stack overflow" << '\n';
    return false;
  }
  else
  {
    a[++top] = x;
    return true;
  }
}

int Stack::pop()
{
  if(top<0)
  {
    std::cout << "stack underflow" << '\n';
    return false;
  }
  else
  {
    int x = a[top--];
    return x;
  }
}

bool Stack::isEmpty()
{
  return(top < 0);
}

int main()
{
    struct Stack s;
    std::cout << "Pushing values to the Stack" << '\n';
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " Popped from stack\n";
    return 0;
}
