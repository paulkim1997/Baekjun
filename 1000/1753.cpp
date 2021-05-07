#include <bits/stdc++.h>
using namespace std;

int d[20005];
vector<pair<int, int>> adj[20005];
const int INF = 1e9+10;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int v,e;
    cin >> v >> e;

    int start;
    cin >> start;

    //거리 배열 INF로 채워주기
    fill(d, d+v+1, INF);

    //u -> v 로 가는 가중치 w 입력 받고 추가
    while(e--) {
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({w,v});
    }

    //힙 선언 <거리, 정점 번호>
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;

    //시작 index 넣고 시작 준비비
    d[start] = 0;
    pq.push({d[start],start});

    while(!pq.empty()) {
        //최솟값 뽑음
        auto cur = pq.top(); pq.pop();

        //거리 = 최솟값 중 거리, idx = 최솟값 정점
        int dist = cur.first, idx = cur.second;

        //최소거리배열에 저장된 값이랑 거리랑 다르면 아무동작 하지 않음
        if(d[idx] != dist) continue;

        //현재 정점에서 갈수 있는 모든 정점에 대하여
        for(auto next : adj[idx]) {
            //cost = 현재 정점에서 해당 정점까지 비용, nidx = 다음 정점
            int cost = next.first, nidx = next.second;

            //최소 거리 배열에서 다음 정점의 거리 값보다 (현재까지 거리 + 현재부터 다음거리까지) 비교해서 갱신
            if(d[nidx] > dist + cost) {
                d[nidx] = dist+cost;
                pq.push({d[nidx], nidx});
            }
        }
    }
    //최소 거리 배열 출력
    for(int i=1;i<=v;i++) {
        if(d[i] == INF) cout << "INF\n";
        else cout << d[i] << "\n";
    }
}