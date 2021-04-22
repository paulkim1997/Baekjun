#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    for(int i=0;i<count;i++) {
        // <우선순위, 프린터번호>
        priority_queue<pair<int,int>> pq;
        queue<pair<int, int>> q;

        int tasks, wantIndex;
        int answer = 0;
        cin >> tasks >> wantIndex;

        for(int j=0;j<tasks;j++) {
            int priority=0;
            cin >> priority;
            //<우선순위, 프린터 번호>
            q.push({priority, j});
            pq.push({priority, j});
        }

        while(1) {
            int pr = q.front().first;
            int no = q.front().second;
            q.pop();

            if(pq.top().first == pr) {
                pq.pop();
                answer++;
                if(wantIndex == no) {
                    cout << answer << "\n";
                    break;
                }
            } else {
                q.push({pr, no});
            }
        }
    }
}