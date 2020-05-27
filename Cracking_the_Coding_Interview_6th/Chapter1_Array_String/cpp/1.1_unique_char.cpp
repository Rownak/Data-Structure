#include <iostream>
#include <map>
#include <unordered_map>
#include<string>

using namespace std;
const int MAX_CHAR = 256;

/* use additional datastructure unorder map
 Time complexity best O(n)
 Time complexity Worst O(n^2)
*/
bool unqCheckMap(string str){

    unordered_map<char,int> um;
    bool isUnq = true;
    for(char ch : str){
        if (um.find(ch) == um.end()){
            um[ch]=1;
        }
        else{
            return false;
        }
    }
    return true;


}

/* use additional datastructure boolean array
 Time complexity best O(n)
*/

bool unqCheckBoolArray(string str){


    bool chars[MAX_CHAR] = {0};

    for(char ch : str){
        if(chars[int(ch)]==1){
            return false;
        }
        else{
            chars[int(ch)]=1;
        }
    }

    return true;

}


/* No additional datastructure
    using bit manupulation
 Time complexity best O(n)

 *** Only works for a-z
*/

bool unqCheckBit(string str){


    int checker = 0;

    for(char ch : str){

        int bitAtIndx = int(ch - 'a');

        //cout << bitAtIndx << "\n";

        if((checker & 1 << bitAtIndx)>0){
            return false;
        }

        checker = checker | 1 << bitAtIndx;

    }

    return true;

}

int main(){

    //bool isUnq = unqCheckMap("abcd");
    bool isUnq = unqCheckBit("abcdefgh");

    if(isUnq){
        cout << "All unique chracters" <<"\n";
    }
    else{
        cout << "Has duplicate chracters"<< "\n";
    }


}
