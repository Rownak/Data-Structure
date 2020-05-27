#include <iostream>
#include <map>
#include <unordered_map>
#include<string>

using namespace std;
const int MAX_CHAR = 256;

/*
    quck sort is used. Worst case complexity O (n^2)
*/
bool checkPermutation_sort(string str1, string str2){

    if(str1.length() != str2.length()){

        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    cout << str1 << "\n";
    cout << str2 << "\n";

    if(str1 == str2) return true;
    else return false;


}

/*
    Count array used. Worst case complexity O (n)
*/

bool checkPermutation_count_array(string str1, string str2){


    if(str1.length() != str2.length()){

        return false;
    }

    int countStr[MAX_CHAR] = {0};
    int i=0;
    for(i=0; str1[i] && str2[i]; i++){

        countStr[str1[i]]++;
        countStr[str2[i]]--;

    }

    for(i=0; i< MAX_CHAR; i++){
        if(countStr[i]){
            return false;
        }
    }
    return true;

}

int main(){

    //bool isUnq = unqCheckMap("abcd");

    string str1 = "abcc";
    string str2 = "abc";

    bool isUnq = checkPermutation_count_array(str1, str2);

    if(isUnq){
        cout << "Yes" <<"\n";
    }
    else{
        cout << "No"<< "\n";
    }


}
