#include <iostream>
#include<vector>
#include<algorithm>
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
    std::reverse(arr.begin(), arr.end());
    //std::cout << "reverse array is: " << '\n';
    for(int arr_j = 0;arr_j < n;arr_j++){
      std::cout << arr[arr_j]<<std::endl;
    }
}
