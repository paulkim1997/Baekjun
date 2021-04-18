#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k,m;
    cin >> n >> k >> m;
    int count = 0;
    int flag = 0;
    deque<int> dq;

    for(int i=0;i<n;i++) {
        dq.push_back(i+1);
    }

    for(int i=0;i<n;i++) {
        if(flag == 0) {
            for(int j=0;j<k-1;j++) {
                int num = dq.front(); dq.pop_front();
                dq.push_back(num);
            }
            cout << dq.front() << "\n";
            dq.pop_front();
            count++;
            if(count%m == 0) flag = 1;

        } else if(flag == 1) {
            for(int j=0;j<k-1;j++) {
                int num = dq.back(); dq.pop_back();
                dq.push_front(num);
            }
            cout << dq.back() << "\n";
            dq.pop_back();
            count++;
            if(count%m == 0) flag = 0;
        }

    }

}
