#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    for(int i=0;i<t;i++) {
        deque<char> dq;
        int n; cin >> n;
        for(int j=0;j<n;j++) {
            char c; cin >> c;
            if(j==0) dq.push_back(c);
            else {
                if(c <= dq.front()) dq.push_front(c);
                else dq.push_back(c);
            }
        }

        for(auto u : dq) cout <<u;

        cout <<"\n";
    }
}
