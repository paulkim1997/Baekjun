#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int c; cin >> c;
    for(int i=0;i<c;i++) {
        int n; cin >> n;
        vector<int> v;
        int sum = 0;

        for(int j=0;j<n;j++) {
            int score; cin >> score;
            sum += score;
            v.push_back(score);
        }
        int mean = (float)sum/n;
        int count = 0;
        for(auto s : v) {
            if(s > mean) {
                count++;
            }
        }

        printf("%.3f%\n", 100.0*count/n);

    }
}
