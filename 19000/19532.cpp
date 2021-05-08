#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    for(int x=-999;x<=999;x++) {
        for(int y=-999;y<=999;y++) {
            int first = a*x + b*y - c;
            int second = d*x + e*y - f;
            if(first == 0 && second == 0) {
                cout << x << " "  << y;
                return 0;
            }
        }
    }
}