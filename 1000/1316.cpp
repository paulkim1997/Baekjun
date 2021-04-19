#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count; cin >> count;
    int ans = 0;
    for(int i=0;i<count;i++) {
        int arr[30] = {0,};
        string input; cin >> input;
        bool check = true;

        for(int j=0;j<input.size();j++) {
            if(j==0) {
                arr[input[j]-97]++;
            } else if(input[j] == input[j-1]) continue;

            if(j>0 && arr[input[j]-97]) {
                check = false;
                break;
            }
            else {
                arr[input[j] - 97]++;
            }
        }
        if(check) ans++;
    }
    cout << ans;
}
