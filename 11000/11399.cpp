#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    vector<int> numbers;

    for(int i=0;i<count;i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    int answer = 0;

    for(int i=0;i<count;i++) {
        for(int j=0; j<i+1;j++) {
            answer += numbers[j];
        }
    }

    cout << answer;
}