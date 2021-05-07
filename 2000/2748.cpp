//테이블 정의
//d[i] = i번째 피보나치 수

//점화식 찾기
//d[k] = d[k-1] + d[k-2];

//초기값 설정
//d[1] = 0, d[2] = 1, d[3] = 1

#include <bits/stdc++.h>
using namespace std;

long long d[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    d[1] = 1;
    d[2] = 1;

    for(int i=3;i<=n;i++) {
        d[i] = d[i-1] + d[i-2];
    }
    cout << d[n];
}