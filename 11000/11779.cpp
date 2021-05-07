#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

vector<pii> adj[1005];
int d[1005];
int pre[1005];
const int INF = 1e9+10;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //도시의 개수 = 정점의 개수
    int n; cin >> n;

    //버스의 개수 = 간선의 개수
    int m; cin >> m;

    for(int i=0;i<m;i++) {
        int from,to, cost;
        cin >> from >> to >> cost;
        adj[from].push_back({cost, to});
    }

    int start, end;
    cin >> start >> end;

    fill(d, d+n+1, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    d[start] = 0;
    pq.push({d[start], start});
    while(!pq.empty()) {
        auto cur = pq.top(); pq.pop();
        int dist = cur.first, idx = cur.second;
        if(d[idx] != dist) continue;

        for(auto next : adj[idx]) {
            int cost = next.first, nidx = next.second;
            if(d[nidx] > cost + dist) {
                d[nidx] = cost + dist;
                pq.push({d[nidx], nidx});
                pre[nidx] = idx;
            }
        }
    }
    vector<int> path;
    int cur = end;
    while(cur != start) {
        path.push_back(cur);
        cur = pre[cur];
    }
    path.push_back(cur);
    reverse(path.begin(), path.end());
    //출발 도시 -> 도착 도시 최소 비용
    cout << d[end] << "\n";

    //최소 비용 갖는 경로에 포함된 도시의 개수
    cout << path.size() << "\n";

    //방문 도시 순서
    for(auto c : path) {
        cout << c << " ";
    }
}