#include <iostream>
using namespace std;

int main() {
	int i, j,n;
	cin >> n;
	int res[1000];
	for (int k = 0; k < n; k++) {
		cin >> i >> j;
		res[k] = i + j;
	}
	for (int k = 0; k < n; k++) {
		cout << res[k] << endl;
	}
}
