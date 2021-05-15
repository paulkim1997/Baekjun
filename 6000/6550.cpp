#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    while(cin >> a >> b ){
        int indexA = 0;
        int indexB = 0;

        for(int i=0;i<b.size();i++) {
            if(b[i] == a[indexA]) {
                indexA++;
            }
        }
        if(indexA == a.size()) {
            cout <<"Yes\n";
        } else {
            cout << "No\n";
        }
    }
}