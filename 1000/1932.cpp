//테이블 정의
//D[i][j] 는 i,j 까지 도달할때까지의 최대 합

//점화식
//D[k][l] = max(D[k-1][l-1], D[k-1][l]) + S[k][l]

//초기값 설정
//D[1][1] = S[1][1]

#include <bits/stdc++.h>
using namespace std;

int arr[505][505];
int d[505][505];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if(n==1) {
        int num; cin >> num;
        cout << num;
        return 0;
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<i+1;j++) {
            cin >> arr[i][j];
        }
    }
    d[1][1] = arr[1][1];

    for(int i=2;i<=n;i++) {
        for(int j=1;j<i+1;j++) {
            d[i][j] = max(d[i-1][j-1], d[i-1][j]) + arr[i][j];
        }
    }

//    출력테스트용
//    for(int i=1;i<=n;i++) {
//        for(int j=1;j<i+1;j++) {
//            cout <<  d[i][j] <<  " ";
//        }
//        cout <<"\n";
//    }
//    cout <<"\n";

    cout << *max_element(d[n] + 1, d[n] + n+1);
}