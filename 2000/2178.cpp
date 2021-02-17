#include <bits/stdc++.h>
using namespace std;

int board[502][502] ={0,};
int dist[502][502];
int n=0;
int m=0;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    //판 입력 받기
    string input;
    for (int i = 0; i < n; i++) {
        cin >> input;
        for (int j = 0; j < input.length(); j++) {
            board[i][j] = input[j]-'0';
        }
    }
    for(int i=0;i<n;i++)
        fill(dist[i], dist[i]+m,-1);
    queue<pair<int,int>> Q;
    Q.push({0,0});
    dist[0][0] = 0;

    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();
        for(int dir=0;dir<4;dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(board[nx][ny]== 0 || dist[nx][ny] >= 0) continue;

            //거리 계싼할때 legnth로 사용했는데 이게 맞음
            dist[nx][ny] = dist[cur.first][cur.second]+1;
            Q.push({nx,ny});
        }

    }

    cout << dist[n-1][m-1]+ 1 << "\n";
}
