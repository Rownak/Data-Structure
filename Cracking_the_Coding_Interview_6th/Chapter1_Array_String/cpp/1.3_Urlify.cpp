/*

URLify: Write a method to replace all spaces in a string with '%20'.
You may assume that the string has sufficient space at the end to hold the additional characters,
and that you are given the "true" length of the string. (Note: If implementing in Java,
please use a character array so that you can perform this operation in place.)
*/


#include<stdio.h>
#include<iostream>
#include<string>


using namespace std;


/*
No additional array
Time complexity O(n)
*/

string replaceSpace(string str){

    int i=0;
    int countSpc = 0;
    int len1 = str.length();
    for(i=0; i< str.length(); i++){
        if(str[i]==' ') countSpc ++;
    }
    //cout << str.length()  << "\n";
    str.resize(len1 + countSpc*2);
    //cout << str.length()  << "\n";

    int point = str.length()-1;
    for (i=len1-1; i>=0; i-- ){

        if(str[i]==' '){
            str[point--] = '0';
            str[point--] = '2';
            str[point--] = '%';

        }
        else{
            str[point--] = str[i];
        }


    }
    return str;

}

int main(){

    string str = "hello world ahnaf farhan";

    str = replaceSpace(str);

    cout << str << "\n";

}
