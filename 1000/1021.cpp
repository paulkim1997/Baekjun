#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    deque<int> dq;
    for(int i=0;i<n;i++) {
        dq.push_back(i+1);
    }
    int ans = 0;

    for(int i=0;i<m;i++) {
        int num; cin >> num;

        auto iter = find(dq.begin(), dq.end(), num);

        int left = iter - dq.begin();
        int right = dq.size() - left;

        if(left < right) {
            for(int j=0;j<left;j++) {
                dq.push_back(dq.front()); dq.pop_front();
                ans++;
            }
            dq.pop_front();
        } else {
            for(int j=0;j<right;j++) {
                dq.push_front(dq.back()); dq.pop_back();
                ans++;
            }
            dq.pop_front();

        }
    }
    cout << ans;

}
