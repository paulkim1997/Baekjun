#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    int index = 1;
    queue<int> q;
    stack<int> s;
    cin >> count;
    bool check = true;

    for(int i=0;i<count;i++) {
        int num;
        cin >> num;
        q.push(num);
    }

    while(1) {
        if(q.empty() && s.empty())
            break;
        if(!q.empty() && q.front() == index) {
            q.pop();
            index++;
        } else if(!s.empty() && s.top() == index) {
            s.pop();
            index++;
        } else if(!q.empty()){
            int cur = q.front(); q.pop();
            s.push(cur);
        } else {
            check = false;
            break;
        }
    }


    if(check)
        cout << "Nice";
    else
        cout << "Sad";
}