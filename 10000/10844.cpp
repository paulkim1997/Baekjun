//테이블 정의
//D[i][j] = i자리 수면서 j로 끝나는 계단 수 개수

//점화식 찾기
//D[i][j]는 3가지 경우
//j가 0일때 -> 1만 가능함
//j가 9일때 -> 8만 가능함
//j가 나머지 일때 -> 2개씩 가능

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll D[102][10];
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i=1;i<=9;i++) {
        D[1][i] = 1;
    }

    for(int i=2;i<=n;i++) {
        for(int j=0;j<=9;j++) {
            if(j==0) {
                D[i][j] = D[i-1][1];
            } else if(j==9) {
                D[i][j] = D[i-1][8];
            } else {
                D[i][j] = D[i-1][j-1] + D[i-1][j+1];
            }

            D[i][j] %= 1000000000;
        }
    }
    ll ans = 0;
    for(int i=0;i<=9;i++) {
        ans += D[n][i];
    }

    ans %= 1000000000;
    cout << ans;

}