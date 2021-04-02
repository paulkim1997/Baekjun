#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    double wHalf = (double)w/2;
    double hHalf = (double)h/2;

    vector<int> distances;

    if(x<wHalf) {
        distances.push_back(x);
    } else if(x>=wHalf) {
        distances.push_back(w-x);
    }

    if(y<hHalf) {
        distances.push_back(y);
    } else if(y>hHalf) {
        distances.push_back(h-y);
    }

    cout << *min_element(distances.begin(), distances.end());

}