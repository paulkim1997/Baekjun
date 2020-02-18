//시간 초과가 났던 문제. 3중 for문으로 해결되는줄 알았으나 초과
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int num, count=0;
	cin >> num;

	for (int i = 1; i <= num/3; i++) {
		for (int j = 1; j <= num/3; j++) {
				int sum = 0;
				sum = i * 3 + j * 3;
				if ((num - sum) % 3 == 0 && sum < num)
					++count;
		}
	}
	cout << count;
}
