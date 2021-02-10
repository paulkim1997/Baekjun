#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;
    int pos = 0;
    for(int i=0;i<count;i++) {
        string op="";
        int num;

        cin >> op;

        if(op == "push") {
            cin >> num;
            arr[pos++] = num;
        } else if(op == "pop") {
            if(pos ==0)
                cout << -1 << "\n";
            else if(pos > 0) {
                cout << arr[pos-1] << "\n";
                pos--;
            }

        } else if(op == "size") {
            cout << pos << "\n";
        } else if(op == "empty") {
            if(pos==0) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(op == "top") {
            if(pos==0) cout << -1 << "\n";
            else cout << arr[pos-1] << "\n";
        }
    }

}