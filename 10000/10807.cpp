#include <bits/stdc++.h>
using namespace std;

int arr[101];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    for(int i=0;i<count;i++) {
        int input;
        cin >> input;
        arr[i] = input;
    }

    int find;
    cin >> find;
    int answer=0;
    for(int i=0;i<count;i++) {
        if(arr[i] == find)
            answer++;
    }

    cout << answer;
}