#include <bits/stdc++.h>
using namespace std;

int arr[1000001];
int numbers[100001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    for(int i=0;i<count;i++) {
        int a;
        cin >> a;
        numbers[i] = a;
        arr[a]++;
    }
    int num;
    int answer =0;
    cin >> num;
    for(int i=0;i<count;i++) {
        if(arr[num-numbers[i]] == 1)
            answer++;
    }
    cout << answer/2;
}