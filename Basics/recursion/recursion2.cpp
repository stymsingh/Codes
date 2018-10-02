#include <iostream>
using namespace std;

//resursive function
int sum(int num)
{
    int summ = 0;
    summ = summ + num;
    if(num >= 1) //base condition
      summ = summ + sum(num - 1);
      return summ;
}

int main()
{
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;
    int result = sum(number);
    std::cout << "result is: " << result << '\n';
    return 0;
}
