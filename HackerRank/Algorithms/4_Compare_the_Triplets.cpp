#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    /*
        std::vector<int> first;                                // empty vector of ints
        std::vector<int> second (4,100);                       // four ints with value 100
        std::vector<int> third (second.begin(),second.end());  // iterating through second
        std::vector<int> fourth (third);  
    */
    vector < int > score (2, 0);
    
    if(a0>b0){
        score[0]++;
    }
    else if(b0>a0){
        score[1]++;
    }
    if(a1>b1){
        score[0]++;
    }
    else if(b1>a1){
        score[1]++;
    }
    if(a2>b2){
        score[0]++;
    }
    else if(b2>a2){
        score[1]++;
    }
    return score;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
