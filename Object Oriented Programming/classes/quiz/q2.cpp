//implementation of stack through class

#include<iostream>
using namespace std;
class Stack
{
  private:
    int arr[10];
    int l;
  public:
    void reset()
    {
      l = 0;
      for(int i=0;i<10;i++)
      {
        arr[i] = 0;
      }
    }
    bool push(int num)
    {
      if(l == 10)
          return false;

      else
      {
        arr[l++] = num;
        return true;
      }
    }

    int pop()
    {
      return arr[l--];
    }

      void print()
  	{
  		std::cout << "( ";
  		for (int i = 0; i < l; ++i)
  			std::cout << arr[i] << ' ';
  		std::cout << ")\n";
  	}

};
int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	return 0;
}
