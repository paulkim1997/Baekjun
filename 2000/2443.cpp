#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    for(int i=0;i<count;i++) {
        for(int k=0;k<i;k++) {
            cout << " ";
        }

        for(int j=0;j<2*(count-i-1)+1;j++) {
            cout << "*";
        }

        cout << "\n";
    }
}