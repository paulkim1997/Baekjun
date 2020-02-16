#include <iostream>
using namespace std;

int main() {
	int count;
	int sum = 0;
	char input[100] = {}; //char형으로 숫자를 하나의 문자열로 받음 ex) 12345 -> 1,2,3,4,5
	cin >> count;
	scanf("%s", input);
	
	for (int i = 0; i < count; i++) {
		sum += (input[i] - '0'); //char형에서 '0'을 빼주면 int형으로 변환
	}

	cout << sum;
}
