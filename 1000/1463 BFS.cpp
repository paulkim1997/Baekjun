#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int dx[3] = {1,2,3};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    arr[1] = 0;
    queue<int> Q;
    Q.push(1);
    while(!Q.empty()) {
        int cur = Q.front(); Q.pop();
        //종료 조건
        if(cur == n) {
            cout << arr[cur];
            return 0;
        }
        int nx;
        for(int dir=0;dir<3;dir++) {

            if(dir == 0) {
                nx = cur + dx[0];
            } else {
                nx = cur * dx[dir];
            }

            //범위 넘어가면 스킵
            if(nx > n) continue;

            if(arr[nx] == 0) {
                arr[nx] = arr[cur] + 1;
            } else {
                continue;
            }

            Q.push(nx);
        }
    }
}