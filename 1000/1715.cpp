#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int answer = 0;
    int count; cin >> count;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<count;i++) {
        int num; cin >> num;
        pq.push(num);
    }

    while(!pq.empty()){
        if(pq.size() == 1) break;
        int n1 = pq.top(); pq.pop();
        int n2 = pq.top(); pq.pop();
        answer += n1+ n2;
        pq.push(n1+n2);
    }
    cout << answer;
}
