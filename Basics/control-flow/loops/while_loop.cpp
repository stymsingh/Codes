#include<iostream>
using namespace std;

int main() {
  int count = 0;
  /** while loop **/
  while(count < 10)
  {
    std::cout << "count after "<< count<<"th iteration : "<< count << '\n';
    count ++;
  }
  return 0;
}
