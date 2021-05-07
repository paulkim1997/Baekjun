//테이블 정의
//D[i][j] = i번째 잔까지 마실때의 총합과 연속으로 j잔 마심
//j는 0 or 1 or 2

//점화식 찾기
//K번째 잔을 안마시는 경우, 이전 잔을 마셨거나 안마셨거나 최대값
//D[k][0] = max(D[i-1][0], D[i-1][1], D[i-1][2])

//K번째 잔을 첫번째로 마신 경우 이전 잔은 안마신 경우를 가져옴
//D[k][1] = D[i-1][0] + S[i]

//K번째 잔을 두번째로 마신거면 이전 잔은 첫번째 잔이겠네
//D[k][2] = D[i-1][1] + S[i]

//초기값 설정
//D[1][0] = 0
//D[1][1] = S[1]
//D[1][2] = 0
//D[2][0] = S[1]
//D[2][1] = S[2]
//D[2][2] = S[1] + S[2]

#include <bits/stdc++.h>
using namespace std;

int s[10005];
int d[10005][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> s[i];
    }
    if(n==1){
        cout << s[1];
        return 0;
    }

    d[1][0] = 0;
    d[1][1] = s[1];
    d[1][2] = 0;
    d[2][0] = s[1];
    d[2][1] = s[2];
    d[2][2] = s[1] + s[2];

    for(int i=3;i<=n;i++) {
        int temp = max(d[i-1][0], d[i-1][1]);
        d[i][0] = max(temp, d[i-1][2]);
        d[i][1] = d[i-1][0] + s[i];
        d[i][2] = d[i-1][1] + s[i];
    }

    int temp = max(d[n][0], d[n][1]);
    cout << max(temp, d[n][2]);
}