//테이블 정의
//D[i] = i자리로 이루어진 이친수의 개수

//점화식 찾기
//D[k] = D[k-1] + D[k-2];
//끝이 0인 이친수, 끝이 1인 이친수 패턴 파악해보니 이게 나왔음

//초기값 설정
//D[1] = 1, D[2] = 1, D[3] = 2, ...

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