#include <bits/stdc++.h>
using namespace std;

int board[52][52];
bool vis[52][52];
int n,m,k;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testCase;
    cin >> testCase;

    //테스트 케이스 만큼 반복
    for(int i=0;i<testCase;i++) {
        int count=0;
        cin >> n >> m >> k;
        //보드 초기화
        for(int a=0;a<n;a++)
            fill(board[a], board[a] + n, 0);
        //방문 확인 초기화
        for(int a=0;a<n;a++)
            fill(vis[a], vis[a] + n, 0);
        //배추 심어져있는 곳 표시
        for(int j=0;j<k;j++) {
            int x;
            int y;
            cin >> x >> y;
            board[x][y] = 1;
        }
        //x,y좌표 Q
        queue<pair<int, int>> Q;

        for(int j=0;j<n;j++) {
            for(int l=0;l<m;l++) {
                //전체를 탐색하면서 배추가 심어져있으면서 방문 안한곳부터 시작
                if(board[j][l] != 0 && vis[j][l] == 0) {
                    //배추 벌레 갯수 ++
                    count++;
                    //BFS시작
                    Q.push({j,l});
                    vis[j][l] = 1;
                    while(!Q.empty()) {
                        auto cur = Q.front(); Q.pop();

                        for(int dir=0;dir<4;dir++) {
                            int nx = cur.first + dx[dir];
                            int ny = cur.second + dy[dir];

                            if(nx<0||nx>=n||ny<0||ny>=m) continue;
                            if(vis[nx][ny] || board[nx][ny] == 0) continue;

                            vis[nx][ny] = 1;
                            Q.push({nx,ny});
                        }
                    }
                }
            }
        } cout << count << "\n";
    }

}
