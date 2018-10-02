#include <iostream>
using namespace std;

void update(int *a,int *b) {
      int sum = *a + *b;
      int diff;
      if(*a > *b)
      {
        diff = *a - *b;
      }
      else
      {
        diff = *b - *a;
      }
      std::cout << sum << "\n" << diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    std::cin >> a;
    std::cin >> b;
    update(pa, pb);
    return 0;
}
