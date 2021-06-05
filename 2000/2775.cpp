#include <bits/stdc++.h>
using namespace std;

int D[15][15];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n,k;
        cin >> k >> n;
        memset(D, 0, sizeof(D));
        for(int i=1;i<15;i++) {
            D[0][i] = i;
        }
        for(int i=1;i<=k;i++) {
            for(int j=1;j<=n;j++) {
                int sum= 0;
                for(int t=1;t<=j;t++) {
                    sum+= D[i-1][t];
                }
                D[i][j] = sum;
            }
        }
        cout << D[k][n] <<"\n";
    }
}

