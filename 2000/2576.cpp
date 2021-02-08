#include <bits/stdc++.h>
using namespace std;

int arr[7];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int index = 0;
    int total = 0;

    for(int i=0;i<7;i++) {
        cin >> arr[i];
        if(arr[i]%2 != 0) {
            total += arr[i];
        }
    }

    int min = 101;
    for(int i=0;i<7;i++) {
        if(min > arr[i] && arr[i] %2!=0) {
            min = arr[i];
        }
    }
    if(total == 0) {
        cout << -1;
        return 0;
    }
    cout << total << "\n";
    cout << min << "\n";
}