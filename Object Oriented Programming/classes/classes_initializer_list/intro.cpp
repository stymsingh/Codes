#include <iostream>

class A
{
public:
    A(int x) { std::cout << "A " << x << "\n"; }
};

class B
{
private:
    A m_a;
public:
    B(int y): m_a(y-1) // call A(int) constructor to initialize member m_a
    {
        std::cout << "B " << y << "\n";
    }
};

int main()
{
    B b(5);
    return 0;
}

/******************
  Explanation for the output:

  When variable b is constructed, the B(int) constructor is called with value 5. Before the body of the
  constructor executes, m_a is initialized, calling the A(int) constructor with value 4. This prints “A 4”.
  Then control returns back to the B constructor, and the body of the B constructor executes, printing “B 5”.

******************/
