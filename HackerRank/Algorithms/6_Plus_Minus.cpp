#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int positive=0, negetive=0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]>0){
            positive ++;
        }
        else if(arr[arr_i]<0){
            negetive ++;
        }
    }
    cout<< (double) positive/n <<endl << (double) negetive/n<< endl << (double) (n-positive-negetive)/n;
    
    return 0;
}
