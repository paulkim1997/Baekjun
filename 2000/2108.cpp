#include <bits/stdc++.h>
using namespace std;

int n;
int arr[500005];
int check[8001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    cin >> n;
    int sum = 0;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        //산술평균 위한 총합
        sum += arr[i];
        //최빈값 위한 표시
        check[arr[i]+4000]++;
    }
    sort(arr, arr+n);

    int cnt = 0;
    for(int i=0;i<8001;i++){
        if(check[i] == 0) continue;

        if(check[i] > cnt) {
            v.clear();
            cnt = check[i];
            v.push_back(i-4000);
        }
        else if(check[i] == cnt) {
            v.push_back(i-4000);
        }

    }

    //산술평균
    cout << round((float)sum/n) << "\n";

    //중앙값
    cout << arr[n/2] << "\n";

    sort(v.begin(), v.end());
    //최빈값
    if(v.size() > 1) {
        cout << v[1] << "\n";
    } else {
        cout << v[0] << "\n";
    }

    //범위
    cout << arr[n-1] - arr[0] <<"\n";
}

