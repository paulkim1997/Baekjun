#include <bits/stdc++.h>
using namespace std;

int n;
int arr[26][26];
int vis[26][26];
queue<pair<int,int>> Q;
vector<int> v;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i=0;i<n;i++) {
        string input; cin >> input;
        for(int j=0;j<input[j];j++) {
            arr[i][j] = input[j]-'0';
        }
    }

    int count =0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {

            if(arr[i][j] == 0 || vis[i][j]) continue;
            else {
                count++;
                //BFS 시작
                int ans = 0;
                Q.push({i,j});
                vis[i][j] = 1;
                while(!Q.empty()) {
                    auto cur = Q.front(); Q.pop();
                    ans++;
                    for(int dir=0;dir<4;dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if(nx < 0 || ny < 0 || nx > n || ny > n) continue;

                        if(vis[nx][ny] || arr[nx][ny] == 0) continue;

                        Q.push({nx, ny});
                        vis[nx][ny] = 1;
                    }
                }
                v.push_back(ans);
            }
        }
    }
    cout << count << "\n";
    sort(v.begin(), v.end());
    for(auto c : v)
        cout << c  << "\n";
}
