#include <bits/stdc++.h>
using namespace std;

int board[502][502] ={};
bool vis[502][502] = {};
int n=0;
int m=0;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    int count = 0;
    vector<int> areaV;
    //판 입력 받기
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> board[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            if(board[i][j] != 1 || vis[i][j] == 1)
                continue;
                queue<pair<int,int>> Q;
                vis[i][j] = 1;
                Q.push({i,j});
                count++;
                int area = 0;
                while(!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    area++;

                    for(int dir=0;dir<4;dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(vis[nx][ny] ||  board[nx][ny] != 1) continue;

                        vis[nx][ny] = 1;
                        Q.push({nx,ny});
                    }
                }
                areaV.push_back(area);

        }
    }
    cout << count << "\n";
    if(areaV.empty())
        cout << "0";
    else
        cout << *max_element(areaV.begin(), areaV.end());
}