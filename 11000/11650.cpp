#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    vector<pair<int, int>> v;
    cin >> count;

    for(int i=0;i<count;i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    for(int i=0;i<count;i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}