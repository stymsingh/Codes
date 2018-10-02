#include<iostream>
using namespace std;
int main()
{
  int fibonnacci[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
  //looping through the entire array
  for(int number : fibonnacci)
  {
    std::cout << "fibonnacci numbers are : " << number << '\n';
  }
}
