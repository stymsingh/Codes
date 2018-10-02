#include <iostream>
using namespace std;

int main() {
    int size;
    std::cin >> size;
    int *a = new int[size];
    for(int i=0;i<size;++i)
    {
      std::cin >> a[i];
    }
    for(int j=size-1;j>=0;--j)
    {
      std::cout<< a[j] << " ";
    }
    return 0;
}
