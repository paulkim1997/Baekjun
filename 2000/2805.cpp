#include <bits/stdc++.h>
using namespace std;

int arr[1000002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m; cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> arr[i];

    }

    sort(arr, arr + n);

    int start = 0;
    int end = arr[n-1];
    int result = 0;
    while(start <= end) {
        int mid = (start+end)/2;
        long long sum =0;

        for(int i=0;i<n;i++){
            if(arr[i] > mid) {
                sum += arr[i]-mid;
            }
        }

        if(sum >= m) {
            result = mid;
            start = mid+1;
        } else if(sum < m) {
            end = mid-1;
        }
    }
    cout << result;
}