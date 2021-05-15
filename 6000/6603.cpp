#include <bits/stdc++.h>
using namespace std;

int k;
int arr[15];
int answer[7];
int isused[15];

void func(int n) {
    if(n==6) {
        for(int i=0;i<6;i++) {
            cout << answer[i] << " ";
        }
        cout <<"\n";
        return;
    }

    for(int i=0;i<k;i++) {
        if(!isused[i] && answer[n-1] < arr[i]) {
            answer[n] = arr[i];
            isused[i] = 1;
            func(n+1);
            isused[i] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(1){
        cin >> k;

        if(k==0) break;

        for(int i=0;i<k;i++) {
            cin >> arr[i];
        }
        sort(arr, arr+k);

        func(0);
        cout <<"\n";
    }
}