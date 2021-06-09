#include <bits/stdc++.h>
using namespace std;

int R[1001];
int G[1001];
int B[1001];
int D[1001][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    for(int i=1;i<=n;i++) cin>> R[i] >> G[i] >> B[i];

    D[1][0] = R[1];
    D[1][1] = G[1];
    D[1][2] = B[1];

    for(int i=2;i<=n;i++) {
        D[i][0] = min(D[i-1][1], D[i-1][2])+R[i];
        D[i][1] = min(D[i-1][0], D[i-1][2])+G[i];
        D[i][2] = min(D[i-1][0], D[i-1][1])+B[i];
    }
    int mini = min(D[n][0],D[n][1]);
    cout << min(mini, D[n][2]);
}