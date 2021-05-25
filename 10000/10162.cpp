#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    //A        B      C
    //300초    60초    10초
    int a = 300, b = 60, c = 10;
    int aCnt = 0, bCnt = 0, cCnt = 0;

    while(t>=300){
        t -= a;
        aCnt++;
    }

    while(t>= b) {
        t -= b;
        bCnt++;
    }

    while(t >= c) {
        t -= c;
        cCnt++;
    }

    if(t==0) {
        cout << aCnt << " " <<  bCnt << " " << cCnt;
    } else {
        cout << "-1";
    }
}