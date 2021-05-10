#include <bits/stdc++.h>
using namespace std;

int arr[501][501];
int vis[501];
int ans;
int n,m;
queue<int> Q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i=0;i<m;i++) {
        int from, to;
        cin >> from >> to;
        arr[from][to] = 1;
        arr[to][from] = 1;
    }

    vis[1] = 1;
    Q.push(1);
    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();

        for(int i=1;i<=n;i++) {
            if(vis[i]) continue;

            if(arr[cur][i] && !vis[i]) {
                Q.push(i);
                vis[i] = vis[cur] + 1;
                if(vis[i] <=3) {
                    ans++;
                }
            }
        }
    }
    cout << ans;
}
