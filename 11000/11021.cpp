#include<iostream>
using namespace std;
// 한글
int main(){
	int n;
	int i, j;
	cin >> n;
	int count = 1;
	for (int k = 0; k < n; k++) {
		cin >> i >> j;
		cout << "Case #" << count << ": " << i + j << endl;
		++count;
	}
}
