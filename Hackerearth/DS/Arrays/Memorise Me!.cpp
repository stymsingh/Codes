#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    //std::cout << "enter array size: " << '\n';
    cin >> n;
    vector<int> arr(n);
    //std::cout << "enter the original array: " << '\n';
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int q;
    std::cout << "enter number of queries: " << '\n';
    std::cin >> q;
    int num;
    int count;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> num;
       if(arr[arr_i] == num)
          count++;
       else
         std::cout << "NOT PRESENT" << '\n';
    }
    std::cout << "total count is: "<<count << '\n';
}
