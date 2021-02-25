#include <bits/stdc++.h>
using namespace std;

int N;
int cnt;
int isUsed1[40];
int isUsed2[40];
int isUsed3[40];

void nQueen(int n) {
    if(n == N) {
        cnt++;
        return;
    }
    for(int i=0;i<N;i++) {
        if(isUsed1[i] || isUsed2[i+n] || isUsed3[n-i+N-1])
            continue;
        isUsed1[i] = 1;
        isUsed2[i+n] = 1;
        isUsed3[n-i+N-1] = 1;
        nQueen(n+1);
        isUsed1[i] = 0;
        isUsed2[i+n] = 0;
        isUsed3[n-i+N-1] = 0;
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    N = n;
    nQueen(0);
    cout << cnt;
}
