#include<iostream>
using namespace std;
// 한글
int main(){
	int i, j;
	while(true) {
		cin >> i >> j;
		if (i == 0 && j == 0)
			break;
		cout << i + j << endl;
	}
}
