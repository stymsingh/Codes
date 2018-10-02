#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int size;
  std::cout << "array size: " << '\n';
  std::cin >> size;
  vector<int> arr(size);
  for (int i = 0; i < size; i++) {
    std::cin >> arr[i];
  }

  int search;
  std::cout << "enter the search element: " << '\n';
  std::cin >> search;
  for(int j = 0; j < size; j++ )
  {
    if(arr[j] == search)
    {
      std::cout << "index : " << j << '\n';
    }
  }


  return 0;
}
