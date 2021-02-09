#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    for(int i=0;i<count;i++) {
        for(int j=1;j<count-i;j++) {
            cout << " ";
        }
        for(int k=0;k<i+1;k++) {
            cout << "*";
        }
        cout << "\n";
    }
}