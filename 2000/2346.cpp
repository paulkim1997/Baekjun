#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<pair<int, int>> dq;
    int count; cin >> count;

    //1~N까지 채운 덱
    for(int i=0;i<count;i++) {
        int num; cin >> num;
        dq.push_back({num, i+1});
    }

    while(!dq.empty()) {
        cout << dq.front().second << " ";
        int cur = dq.front().first; dq.pop_front();

        if(cur > 0) {
            for(int i=0;i<cur-1;i++) {
                dq.push_back(dq.front()); dq.pop_front();
            }
        } else {
            for(int i=0;i<(cur*-1);i++) {
                dq.push_front(dq.back()); dq.pop_back();
            }
        }
    }


}
