#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    long long int sum=0, min=0, max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
        sum += arr[arr_i];
        if(arr_i==0){
            min = arr[arr_i];
            max = arr[arr_i];
        }
        if(min>arr[arr_i]){
            min = arr[arr_i];
        }
        if(max<arr[arr_i]){
            max = arr[arr_i];
        }
    }
    cout<<sum-max<<" "<<sum-min<<endl;
    return 0;
}
