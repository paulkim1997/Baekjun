#include <bits/stdc++.h>
using namespace std;

int arr[51][51];
int dis[51][51];
int dx[8] = {1,0,-1,0,-1,1,-1,1};
int dy[8] = {0,1,0,-1,1,1,-1,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m; cin >> n >> m;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }
    memset(dis,10000,sizeof(dis));
    int max = 0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == 1) {
                queue<pair<int, int>> Q;
                Q.push({i,j});
                dis[i][j] = 0;
                while(!Q.empty()) {
                    auto cur = Q.front(); Q.pop();

                    for(int dir = 0; dir<8;dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if(nx < 0 || ny < 0 || nx > n || ny > m) continue;

                        if(arr[nx][ny] == 1) continue;

                        if(dis[nx][ny] > dis[cur.first][cur.second] + 1) {
                            dis[nx][ny] = dis[cur.first][cur.second] + 1;
                            if(dis[nx][ny] > max) {
                                max = dis[nx][ny];
                            }
                        } else {
                            continue;
                        }

                        Q.push({nx, ny});
                    }
                }
            }
        }
    }
    vector<int> v;
//    for(int i=0;i<n;i++) {
//        for(int j=0;j<m;j++) {
//            cout << dis[i][j] << " ";
//        }
//        cout << "\n";
//    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            v.push_back(dis[i][j]);
        }
    }
    cout << *max_element(v.begin(), v.end());
}