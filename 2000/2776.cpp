#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while(t--) {
        int n, m;
        set<int> s;
        cin >> n;
        for(int i=0;i<n;i++) {
            int num; cin >> num;
            s.insert(num);
        }

        cin >> m;
        for(int i=0;i<m;i++) {
            int num; cin >> num;
            if(s.find(num) != s.end()) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        }
    }
}