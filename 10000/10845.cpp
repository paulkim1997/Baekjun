#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int head = 0, tail = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    for(int i=0;i<count;i++) {
        string op="";
        int num;

        cin >> op;

        if(op == "push") {
            cin >> num;
            arr[tail++] = num;
        } else if(op == "pop") {
            if(tail - head ==0)
                cout << -1 << "\n";
            else if(tail - head > 0) {
                cout << arr[head] << "\n";
                head++;
            }
        } else if(op == "size") {
            cout << tail-head << "\n";
        } else if(op == "empty") {
            if(tail-head==0) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(op == "front") {
            if(tail-head==0) cout << -1 << "\n";
            else cout << arr[head] << "\n";
        } else if(op == "back") {
            if(tail-head==0) cout << -1 << "\n";
            else cout << arr[tail-1] << "\n";
        }
    }
}