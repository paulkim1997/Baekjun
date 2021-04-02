#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int changes[6] = {1, 5, 10, 50, 100, 500};
    int num;
    cin >> num;

    int money = 1000 - num;
    int count = 0;

    for(int i = 5; i >= 0 ;i--) {
        count += money / changes[i];
        money %= changes[i];
    }

    cout << count;
}