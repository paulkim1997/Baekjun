#include <bits/stdc++.h>
using namespace std;

string board[1001];
int dist1[1001][1001]; //불 거리
int dist2[1001][1001]; //지훈이 거리
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    queue<pair<int, int>> Q1; //불 큐
    queue<pair<int, int>> Q2; //지훈이 큐

    cin >> n >> m;
    for(int i=0;i<n;i++) {
        fill(dist1[i], dist1[i] + m , -1);
        fill(dist2[i], dist2[i] + m , -1);
    }

    for(int i=0;i<n;i++)
        cin >> board[i];

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(board[i][j] == 'F') {
                dist1[i][j] = 0;
                Q1.push({i,j});
            }
            if(board[i][j] == 'J') {
                dist2[i][j] = 0;
                Q2.push({i,j});
            }
        }
    }

    //불에 대한 BFS
    while(!Q1.empty()) {
        auto cur = Q1.front(); Q1.pop();

        for(int dir=0;dir<4;dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(board[nx][ny] == '#' || dist1[nx][ny] >=0) continue;

            dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
            Q1.push({nx,ny});
        }
    }

    //지훈이에 대한 BFS
    while(!Q2.empty()) {
        auto cur = Q2.front(); Q2.pop();

        for(int dir=0;dir<4;dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            //범위 벗어나면 잘 탈줄 함 - 프로그램 종료
            if(nx<0||nx>=n||ny<0||ny>=m) {
                cout << dist2[cur.first][cur.second] + 1;
                return 0;
            }
            if(board[nx][ny] == '#' || dist2[nx][ny] >= 0) continue;
            //불이 지훈이보다 빨리도착하는 경우
            if(dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.first][cur.second]+1) continue;

            dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
            Q2.push({nx,ny});

        }
    }
    //탈출 못해서 프로그램 종료 못하면
    cout << "IMPOSSIBLE";
}
