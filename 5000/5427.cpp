#include <bits/stdc++.h>
using namespace std;

string board[1001];
int distFire[1001][1001];
int distMove[1001][1001];
int n,m,testCase;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> testCase;

    while(testCase--) {
        queue<pair<int, int>> Q1; //불 큐
        queue<pair<int, int>> Q2; //상근이 큐
        bool check = false;

        cin >> m >> n;
        //불 거리, 상근이 거리 배열 초기화
        for(int i=0;i<n;i++) {
            fill(distFire[i], distFire[i] + m, -1);
            fill(distMove[i], distMove[i] + m, -1);
        }

        for(int i=0;i<n;i++)
            cin >> board[i];

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(board[i][j] == '*') {
                    distFire[i][j] = 0;
                    Q1.push({i,j});
                }
                if(board[i][j] == '@') {
                    distMove[i][j] = 0;
                    Q2.push({i,j});
                }
            }
        }

        //불 BFS 시작
        while(!Q1.empty()) {
            auto cur = Q1.front(); Q1.pop();

            for(int dir=0;dir<4;dir++) {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if(nx<0||nx>=n||ny<0||ny>=m) continue;
                if(board[nx][ny] == '#' || distFire[nx][ny] >= 0) continue;

                distFire[nx][ny] = distFire[cur.first][cur.second] + 1;
                Q1.push({nx,ny});
            }
        }

        //상근이 BFS 시작
        while(!Q2.empty()) {
            auto cur = Q2.front(); Q2.pop();

            for(int dir=0;dir<4;dir++) {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if(nx<0||nx>=n||ny<0||ny>=m) {
                    cout << distMove[cur.first][cur.second] + 1 << "\n";
                    check = true;
                    break;
                }
                //  ....
                //  .*@.
                //  ....
                //인 경우 탈출 거리가 모두 나오므로 break 한번 더 해줌
                if(check)
                    break;

                if(board[nx][ny]=='#' || distMove[nx][ny] >= 0) continue;
                if(distFire[nx][ny] != -1 && distFire[nx][ny] <= distMove[cur.first][cur.second] + 1 )continue;

                distMove[nx][ny] = distMove[cur.first][cur.second] + 1;
                Q2.push({nx, ny});
            }

        }

        if(!check)
            cout << "IMPOSSIBLE\n";

    }
}
