#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	while (s.length() > 0) {
		cout << s << endl;
		getline(cin, s);
	}
}
