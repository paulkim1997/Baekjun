//그리디... 어떻게 풀까?
//

#include <bits/stdc++.h>
using namespace std;

int arr[15];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    int answer = 0;
    cin >> n >> k;

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    for(int i=n-1;i>=0;i--) {
        answer += k / arr[i];
        k %= arr[i];
    }

    cout << answer;
}