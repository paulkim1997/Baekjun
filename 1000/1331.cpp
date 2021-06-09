#include <bits/stdc++.h>
using namespace std;

int arr[40][40];
bool vis[40][40];
int dx[8] = {1,2,2,1,-1,-2,-2,-1};
int dy[8] = {2,1,-1,-2,-2,-1,1,2};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string input; cin >> input;
    int x = input[0] - 'A';
    int y = input[1] - '1';
    int startX = input[0] - 'A';
    int startY = input[1] - '1';
    //cout << x << " " << y;

    vis[x][y] = 1;

    for(int i=0;i<35;i++) {
        string in; cin >> in;
        int nx = in[0] - 'A';
        int ny = in[1] - '1';

        bool flag = false;

        for(int dir = 0; dir<8; dir++) {
            int nx2 = x + dx[dir];
            int ny2 = y + dy[dir];

            if(nx2 < 0 || ny2 < 0 || nx2 > 5 || ny2 > 5) continue;

            if(nx2 == nx && ny2 == ny && !vis[nx2][ny2]) {
                flag = true;
                vis[nx2][ny2] = 1;
                break;
            }
        }
        if(flag) {
            x = nx;
            y = ny;
        } else {
            cout << "Invalid";
            return 0;
        }
    }
    bool flag = false;
    for(int dir=0;dir<8;dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx == startX && ny == startY) {
            flag = true;
            break;
        }
    }

    if(flag) cout << "Valid";
    else cout << "Invalid";

}