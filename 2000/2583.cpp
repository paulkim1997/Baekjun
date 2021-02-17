#include <bits/stdc++.h>
using namespace std;

int board[101][101];
bool vis[101][101];
int n,m,k;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;

    //좌표를 지정해 1 추가 할때 애먹음
    for(int i=0;i<k;i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=0; j<y2-y1; j++) {
            for(int l=0;l<x2-x1;l++) {
                board[y1+j][x1+l] = 1;
            }
        }
    }
    queue<pair<int,int>> Q;
    vector<int> areaVector;
    int count = 0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            //색칠도 안됐고, 방문도 안했을때
            if(board[i][j] ==0  && vis[i][j] == 0) {
                int area = 0;
                Q.push({i,j});
                vis[i][j] = 1;
                count++;
                while(!Q.empty()) {
                    auto cur = Q.front(); Q.pop();
                    area++;
                    for(int dir=0; dir<4; dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if(nx<0||nx>=n||ny<0||ny>=m)  continue;
                        if(board[nx][ny] == 1 || vis[nx][ny]) continue;

                        vis[nx][ny] = 1;
                        Q.push({nx,ny});
                    }
                }
                areaVector.push_back(area);
            }
        }
    }
    cout << count << "\n";
    sort(areaVector.begin(), areaVector.end());
    for(auto c : areaVector)
        cout << c << " ";
}
