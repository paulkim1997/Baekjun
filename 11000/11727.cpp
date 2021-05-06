//테이블 정의
//D[i] = 2xn 사각형을 1x2, 2x1, 2x2 타일로 채우는 방법의 수

//점화식 찾기
//D[k] = D[k-1] + D[n-2] + D[n-2]


//초기값 설정
//D[1] = 1, D[2] = 3

#include <bits/stdc++.h>
using namespace std;

int d[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    d[1] = 1;
    d[2] = 3;

    for(int i=3;i<=n;i++) {
        d[i] = (d[i-1] + d[i-2] + d[i-2])%10007;
    }

    cout << d[n];
}