
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void usingPlus(){

    string s1("Hello");
	string s2(" ");
	string s3("World");

	string s = s1 + s2 + s3;
	cout << s;

}

void usingStrStream(){

    string s1("Hello");
	string s2(" ");
	string s3("World");

	stringstream ss;
	ss << s1;
	ss << s2;
	ss << s3;

	string s = ss.str();
	cout << s;
}

void usingAppend(){

	string s1("Hello");
	string s2(" ");
	string s3("World");

	string s;
	s.append(s1);
	s.append(s2);
	s.append(s3);

	cout << s;


}


int main()
{
    usingAppend();

	return 0;
}
