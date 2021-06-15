#include <bits/stdc++.h>
using namespace std;

int D[100002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int ans = -1002;
    for(int i=1;i<=n;i++) {
        cin >> D[i];
        D[i] = max(D[i], D[i] + D[i-1]);
        ans = max(ans,D[i]);
    }

    cout << ans;
}