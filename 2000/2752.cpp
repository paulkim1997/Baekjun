#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    vector<int> v;

    cin >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }

}