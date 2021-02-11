#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;
int arr[MAX*2+1];
int head = MAX;
int tail = MAX;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    for(int i=0;i<count;i++) {
        string op;
        cin >> op;
        if(op == "push_front") {
            int num;
            cin >> num;
            arr[--head] = num;
        } else if(op == "push_back") {
            int num;
            cin >> num;
            arr[tail++] = num;
        } else if(op == "pop_front") {
            if(tail-head== 0)
                cout << "-1" << "\n";
            else {
                cout << arr[head] << "\n";
                head++;
            }
        } else if(op == "pop_back") {
            if(tail-head == 0)
                cout << "-1" << "\n";
            else {
                cout << arr[tail-1] << "\n";
                tail--;
            }
        } else if(op == "size") {
            cout << tail-head << "\n";
        } else if(op == "empty") {
            if(tail-head == 0){
                cout << "1" << "\n";
            } else
                cout << "0" << "\n";
        } else if(op == "front") {
            if(tail-head ==0){
                cout << "-1" << "\n";
            } else
                cout << arr[head] << "\n";
        } else if(op == "back") {
            if(tail-head==0) {
                cout << "-1" << "\n";
            } else
                cout << arr[tail-1] << "\n";
        }
    }

}