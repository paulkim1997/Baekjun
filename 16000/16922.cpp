#include <bits/stdc++.h>
using namespace std;

int n;
bool vis[1002];
int cnt;
int arr[4] = {1,5,10,50};
int answer[22];

void func(int k, int sum) {
    if(k==n) {

        //만든 숫자의 합
        int check = 0;
        for(int i=0;i<n;i++) {
            check += answer[i];
        }

        //이미 만들었던 숫자가 아니면 카운트 세준다
        if(vis[check] != 1) {
            vis[check] = 1;
            cnt++;
        }
        return;
    }

    for(int i=0;i<4;i++) {
        if(answer[k-1] <= arr[i]) {
            answer[k] = arr[i];
            sum += arr[i];
            func(k+1, sum);
            sum -= arr[i];
        }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    func(0,0);
    cout << cnt;
}