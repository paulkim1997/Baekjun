#include <iostream>
using namespace std;

int main() {
	int count;
	int a, b;
	char c;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> a >> c >> b;
		cout << a + b << endl;
	}
}

//tokenizer 사용하지않고 , 을 하나의 문자열로 입력받아 무시
