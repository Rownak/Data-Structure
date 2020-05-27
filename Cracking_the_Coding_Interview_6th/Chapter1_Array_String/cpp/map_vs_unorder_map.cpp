
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

  cout << "\n";
  cout << "C++ map: " << "\n";
  map<string,int> m ={ {"Dijkstra",1972},{"Scott",1976} };
  m["Ritchie"] = 1983;
  cout << "    m[Ritchie]: " <<  m["Ritchie"] << "\n    ";
  for(auto p : m) cout << '{' << p.first << ',' << p.second << '}';
  m.erase("Scott");
  cout << "\n    ";
  for(auto p : m) cout << '{' << p.first << ',' << p.second << '}';
  m.clear();
  cout << "\n";
  cout << "    m.size(): " << m.size() << "\n";

  cout << "\n";

  cout << "C++11 unordered_map: " << "\n";
  unordered_map<string,int> um = { {"Dijkstra",1972},{"Scott",1976} };
  um["Ritchie"] = 1983;
  cout << "    um[Ritchie]: " <<  um["Ritchie"] << "\n    ";
  for(auto p : um) cout << '{' << p.first << ',' << p.second << '}';
  um.erase("Scott");
  cout << "\n    ";
  for(auto p : um) cout << '{' << p.first << ',' << p.second << '}';
  um.clear();
  cout << "\n";
  cout << "    um.size(): " << um.size() << "\n";

  cout << "\n";

}
