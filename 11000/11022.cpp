#include <iostream>
using namespace std;

int main() {
	int count;
	int a, b;
	cin >> count;
	for (int i = 1; i <= count; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
	}
}
