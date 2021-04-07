#include <bits/stdc++.h>
using namespace std;

bool cmp(tuple<int, string, int> a, tuple<int, string, int> b) {
    if(get<0>(a) == get<0>(b))
        return get<2>(a) < get<2>(b);
    else
        return a < b;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    vector<tuple<int, string, int>> v;
    cin >> count;

    for(int i=0;i<count;i++) {
        int x;
        string y;
        cin >> x >> y;
        v.push_back({x, y , i});
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0;i<count;i++) {
        cout << get<0>(v[i]) << " " << get<1>(v[i])<< "\n";
    }
}