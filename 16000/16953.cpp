#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b; cin >> a >> b;
    queue<pair<int,int>> Q;

    Q.push({a,1});
    ll ans = -1;
    while(!Q.empty()) {
        ll cur = Q.front().first;
        ll cnt = Q.front().second;
        Q.pop();

        if(cur == b) {
            ans = cnt;
            break;
        }

        ll nx;

        for(int i=0;i<2;i++) {
            if (i == 0) {
                nx = cur * 2;
            } else {
                nx = cur * 10 + 1;
                //nx = stoi(to_string(cur) + "1");
            }

            if(nx<=b) Q.push({nx, cnt+1});
        }
    }
    cout << ans;
}