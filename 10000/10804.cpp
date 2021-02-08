#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;

    for(int i=0;i<20;i++) {
        v.push_back(i+1);
    }
    int a, b;
    for(int i=0;i<10;i++) {
        cin >> a >> b;
        reverse(v.begin()+a-1,v.begin()+b);
    }
    for(int i=0;i<20;i++) {
        cout << v[i] << " ";
    }
}
