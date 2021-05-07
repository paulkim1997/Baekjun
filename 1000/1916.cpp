#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

vector<pii> adj[1005];
int d[1005];
const int INF = 1000000000;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int m; cin >> m;

    for(int i=0;i<m;i++) {
        int from, to, cost;
        cin >> from >> to >> cost;
        adj[from].push_back({cost, to});
    }
    fill(d, d+n+1, INF);
    int start, end;
    cin >> start >> end;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    d[start] = 0;
    pq.push({d[start], start});
    while(!pq.empty()) {
        auto cur = pq.top(); pq.pop();
        int dist = cur.first, idx = cur.second;
        if(d[idx] != dist) continue;

        for(auto nxt : adj[idx]) {
            int cost = nxt.first;
            int nidx = nxt.second;
            if(d[nidx] > cost + dist) {
                d[nidx] = cost + dist;
                pq.push({d[nidx],nidx});
            }
        }
    }
    cout << d[end];

}