#include <bits/stdc++.h>
using namespace std;

//거리 배열
int dist[100002];
int n,k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    //거리들을 모두 -1로 초기화
    fill(dist, dist+100001,-1);
    //수빈이 위치 0으로
    dist[n] = 0;
    queue<int> Q;
    Q.push(n);
    //BFS 시작
    //동생의 위치에는 초기값인 -1 이 들어있음
    //배열에 방문을 하면, 해당 배열에 방문하기 까지 거리가 저장됨
    //동생에 방문하게 되는순간 -1이었던 값이 거리로 바뀜, 그때까지 반복
    while(dist[k] == -1) {
        auto cur = Q.front(); Q.pop();
        for(int nxt: {cur-1, cur+1, cur*2}) {
            //범위 벗어나면 continue
            if(nxt < 0 || nxt > 100000) continue;
            //이미 방문했었으면 continue
            if(dist[nxt] != -1) continue;
            //방문 안했던 곳이면, 거리 + 1을 저장시켜줌
            dist[nxt] = dist[cur]+1;
            //큐에 넣음
            Q.push(nxt);
        }
    }

    cout << dist[k];
}
