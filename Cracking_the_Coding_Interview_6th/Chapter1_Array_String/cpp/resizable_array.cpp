

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

void vectorTest(){

    vector<int> v; // size of the vector starts at 0

    v.push_back(10); // v now has 1 element
    v.push_back(20); // v now has 2 elements
    v.push_back(30); // v now has 3 elements
    cout << "All vector elements" << "\n";
    for(int p : v) cout <<  p << "\n";

    v.pop_back(); // removes the 30 and resizes v to 2
    cout << "After pop" << "\n";
    for(int p : v) cout <<  p << "\n";

    v.resize(v.size() - 1); // resizes v to 1
    cout << "After resize" << "\n";
    for(int p : v) cout <<  p << "\n";

}

int main(){

    vectorTest();
}

