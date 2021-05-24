#include <bits/stdc++.h>
using namespace std;
int a, t, w;
int answer = 0;

void func() {
    //번
    int bCnt = 0;
    //데기
    int dCnt = 0;

    int loop = 4;

    while(1) {
        for(int i=0;i<4;i++) {
            if(i%2 == 0) {
                answer++;
                bCnt++;
                if(w == 0 && bCnt == t) {
                    return;
                }
            } else {
                dCnt++;
                answer++;
                if(w == 1 && dCnt == t) {
                    return;
                }
            }
        }
        for(int i=0;i<loop;i++) {
            if(i<loop/2) {
                bCnt++;
                answer++;
                if(w == 0 && bCnt == t) {
                    return;
                }
            }
            else {
                answer++;
                dCnt++;
                if(w == 1 && dCnt == t) {
                    return;
                }
            }
        }
        loop += 2;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> a >> t >> w;
    func();
    cout << (answer-1)%a;
}