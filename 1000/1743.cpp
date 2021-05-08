#include <bits/stdc++.h>
using namespace std;

int arr[102][102];
int vis[102][102];
int n,m,k;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;
    queue<pair<int,int>> Q;
    vector<int> v;
    for(int i=0;i<k;i++) {
        int x,y;
        cin >> x >> y;
        arr[x][y] = 1;
    }

    for(int i=0;i<=n;i++) {
        for(int j=0;j<=m;j++) {
            if(arr[i][j] && !vis[i][j]) {
                int area = 0;
                Q.push({i,j});
                vis[i][j] = 1;
                while(!Q.empty()) {
                    auto cur = Q.front(); Q.pop();
                    area++;
                    for(int dir=0;dir<4;dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if(nx < 0 || ny < 0 || nx > n || ny > m) continue;

                        if(arr[nx][ny] == 0 || vis[nx][ny] == 1) continue;

                        Q.push({nx, ny});
                        vis[nx][ny] = 1;
                    }
                }
                v.push_back(area);
            }
        }
    }
    if(v.empty()) {
        cout << "0";
    } else {
        cout << *max_element(v.begin(), v.end());
    }
}