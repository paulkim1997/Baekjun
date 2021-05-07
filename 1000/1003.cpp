#include <bits/stdc++.h>
using namespace std;

long long D0[45];
long long D1[45];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    D0[0] = 1;
    D0[1] = 0;
    D1[0] = 0;
    D1[1] = 1;

    while(t--) {
        int n; cin >> n;

        for(int i=2;i<=n;i++) {
            D0[i] = D0[i-1] + D0[i-2];
            D1[i] = D1[i-1] + D1[i-2];
        }

        cout << D0[n] << " " << D1[n] << "\n";
    }
}