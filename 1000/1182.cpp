#include <bits/stdc++.h>
using namespace std;

int n,s;
int arr[30];
int cnt=0;

void func(int num, int sum) {
    if(num == n) {
        if(sum == s) {
            cnt++;
        }
        return;
    }

    func(num+1,sum);
    func(num+1, sum+arr[num]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;

    for(int i=0;i<n;i++)
        cin >> arr[i];

    func(0,0);
    if(s==0) cnt--;
    cout << cnt;
}
