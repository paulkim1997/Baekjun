#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int n) {
    //1개면 1 -> 3번으로 옮기고 끝
    if(n == 1) {
        cout << a << " " << b << "\n";
        return;
    }
    //n-1개를 1 -> 2 으로
    hanoi(a, 6-a-b, n-1);
    cout << a << " " << b << "\n";
    //n-1개를 2 -> 3 으로
    hanoi(6-a-b, b, n-1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << (1<<n) - 1 << "\n";
    hanoi(1, 3, n);
}
