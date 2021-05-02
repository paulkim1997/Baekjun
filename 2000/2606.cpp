#include <bits/stdc++.h>
using namespace std;

int arr[101][101];
int vis[101];
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int c; cin >> c;
    for(int i=0;i<c;i++) {
        int from, to;
        cin >> from >> to;
        arr[from][to] = 1;
        arr[to][from] = 1;
    }

    queue<int> Q;
    int ans = 0;
    Q.push(1);
    vis[1] = 1;
    while(!Q.empty()) {
        int cur = Q.front(); Q.pop();

        for(int i=0;i<=n;i++) {
            if(arr[cur][i] && !vis[i]) {
                ans++;
                Q.push(i);
                vis[i] = 1;
            }
        }
    }
    cout << ans;
}