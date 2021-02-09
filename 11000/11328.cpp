#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    while(count--) {
        int arr[27] = {0,};

        bool check = true;
        //첫번째 문자열 입력
        string first="";
        cin>>first;

        //첫번째 문자열의 알파벳들에 대응하는 arr++
        for(auto c:first)
            arr[c-'a']++;

        //두번째 문자열 입력
        string second="";
        cin>>second;

        //두번째 문자열의 알파벳들에 대응하는 arr++
        for(auto c:second)
            arr[c-'a']--;

        //마킹해준 배열에 2 아니면 0만 있어야됨 아니면 false
        for(auto i:arr) {
            if(i==0) {
                continue;
            } else {
                check = false;
            }
        }

        if(check)
            cout << "Possible" << "\n";
        else
            cout << "Impossible" << "\n";
    }
}