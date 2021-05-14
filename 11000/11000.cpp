#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

bool cmp(pii a, pii b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<pii> v;
    int n; cin >> n;
    for(int i=0;i<n;i++) {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(),cmp);

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(v[0].second);
    for(int i=1;i<v.size();i++) {
        if(pq.top() <= v[i].first) pq.pop();
        pq.push(v[i].second);
    }
    cout << pq.size();
}