#include<iostream>
using namespace std;
class Something
{
private:
    const int m_array[5];

public:
    Something(): m_array { 1, 2, 3, 4, 5 } // use uniform initialization to initialize our member array
    {
    }
    void print()
    {
      for(int i=0;i<5;i++)
      {
        std::cout << m_array[i] << '\n';
      }
    }

};
int main()
{
  Something something;
  something.print();
}
