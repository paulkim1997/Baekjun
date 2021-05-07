#include <bits/stdc++.h>
using namespace std;

int arr[1000010];
int pre[1000005];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    arr[1] = 0;
    for(int i=2;i<=n;i++) {
        arr[i] = arr[i-1] +1;
        pre[i] = i-1;

        if(i%3==0 && arr[i] > arr[i/3] + 1) {
            arr[i] = arr[i/3] +1;
            pre[i] = i/3;
        }

        if(i%2==0 && arr[i] > arr[i/2] +1){
            arr[i] = arr[i/2] +1;
            pre[i] = i/2;
        }

    }

    cout << arr[n] << "\n";

    int cur = n;

    while(1) {
        cout << cur << " ";
        if(cur == 1) break;
        cur = pre[cur];
    }
}