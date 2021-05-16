#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string board; cin >> board;

    string A = "AAAA";
    string B = "BB";
    string answer = "";
    int cnt = 0;
    for(int i=0;i<board.length();i++) {
        if(board[i] == 'X') cnt++;

        if(board[i] == '.') {
            if(cnt > 0) {
                if(cnt % 2 != 0) {
                    cout << "-1";
                    return 0;
                } else if(cnt ==2 ) {
                    answer += "BB";
                    cnt-=2;
                } else if(cnt >2) {
                    while(cnt != 0){
                        if(cnt >= 4) {
                            answer += "AAAA";
                            cnt -= 4;
                        } else {
                            answer += "BB";
                            cnt -=2;
                        }
                    }
                }
                answer += ".";
            } else if(cnt == 0) {
                answer += ".";
            }
        }

    }
    if(cnt > 0) {
        if(cnt % 2 != 0) {
            cout << "-1";
            return 0;
        } else if(cnt ==2 ) {
            answer += "BB";
        } else if(cnt >2) {
            while(cnt != 0){
                if(cnt >= 4) {
                    answer += "AAAA";
                    cnt -= 4;
                } else {
                    answer += "BB";
                    cnt -=2;
                }
            }
        }
    }
    cout << answer;
}

