#include <bits/stdc++.h>
using namespace std;

int board[130][130];
int white = 0;
int blue = 0;

void cutPaper(int x, int y, int n) {
    int tempCnt = 0;
    for(int i=x; i<x+n; i++) {
        for(int j=y; j<y+n;j++) {
            if(board[i][j]) tempCnt++;
        }
    }

    if(!tempCnt) white++;
    else if(tempCnt == n*n) blue++;
    else {
        cutPaper(x, y, n/2);
        cutPaper(x, y + n/2 , n/2);
        cutPaper(x + n/2, y , n/2);
        cutPaper(x + n/2, y + n/2 , n/2);
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0; j<n; j++) {
            cin >> board[i][j];
        }
    }
    cutPaper(0,0,n);

    cout << white << "\n" << blue;

}
