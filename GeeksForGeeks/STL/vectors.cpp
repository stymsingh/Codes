#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(20);
   for(int i = 0; i < 20; i++) {
        v[i] = i+1;
   }
   v.resize(25);
   for(int i = 20; i < 25; i++) {
        v.push_back(i*2); // Writes to elements with indices [25..30), not [20..25) ! <
   }
   for(int i = 0; i < v.size(); i++) {
      std::cout <   < "elements are: "<<v[i] << '\n';
     }

}
