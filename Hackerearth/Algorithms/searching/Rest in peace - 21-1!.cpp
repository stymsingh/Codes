#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  std::cout << "testcases: " << '\n';
  std::cin >> t;
  while(t--)
  {
    int num;
    std::cout << "number: ";
    std::cin >> num;
    std::string main = to_string(num);
    std::string find = "21";
    if(main.find(find)!=-1)
    {
      std::cout << "The streak is broken!" << '\n';
    }
    else if(num%21 == 0)
    {
      std::cout << "The streak is broken!" << '\n';
    }
    else{
        std::cout << "The streak lives still in our heart!" << '\n';
    }
  }
  return 0;
}
