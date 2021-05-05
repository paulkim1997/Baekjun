//테이블 정의:
//D[i] = 1,2,3의 합으로 나타낼수 있는 가짓수

//초기값 D[1] = 1, D[2] = 2, D[3] = 4

//점화식 ==>  D[i] = D[i-1] + D[i-2] + D[i-3]

#include <bits/stdc++.h>
using namespace std;

int arr[12];
int vis[12];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    while(t--) {
        int num; cin >> num;

        for(int i=4;i<=num;i++) {
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        }

        cout << arr[num] << "\n";
    }
}