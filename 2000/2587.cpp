#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int total =0;
    int a = 0;
    for(int i=0;i<5;i++) {
        cin >> a;
        v.push_back(a);
        total += a;
    }

    sort(v.begin(), v.end());

    cout << total/5 << "\n";
    cout << v[2];
}