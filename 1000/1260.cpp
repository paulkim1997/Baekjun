#include <bits/stdc++.h>
using namespace std;

int n,m,v;
queue<int> q;
int arr[1001][1001];
int vis[1001];

void dfs(int start) {
    cout << start << " ";
    for(int i=1;i<=n;i++) {
        if(arr[start][i] && !vis[i]) {
            vis[i] = 1;
            dfs(i);
        }
    }
}

void bfs(int start) {

    while(!q.empty()) {
        int cur = q.front(); q.pop();
        cout << cur << " ";

        for(int i=1;i<=n;i++) {
            if(arr[cur][i] && !vis[i]) {
                vis[i] = 1;
                q.push(i);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> v;

    for(int i=0;i<m;i++) {
        int from, to;
        cin >> from >> to;
        arr[from][to] = 1;
        arr[to][from] = 1;
    }

    //DFS
    vis[v] = 1;
    dfs(v);
    cout << "\n";

    memset(vis,false, sizeof(vis));

    //BFS
    vis[v] = 1;
    q.push(v);
    bfs(v);
}
