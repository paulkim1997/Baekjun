#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<string> s;

    int n; cin >> n;
    int m; cin >> m;

    while(n--) {
        string input; cin >> input;
        s.insert(input);
    }

    int cnt =0;
    vector<string> v;
    while(m--) {
        string input; cin >> input;
        if(s.find(input) == s.end()) {
            continue;
        } else {
            cnt++;
            v.push_back(input);
        }
    }
    sort(v.begin(), v.end());
    cout << cnt << "\n";
    for(auto c : v) {
        cout << c << "\n";
    }
}