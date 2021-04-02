#include <bits/stdc++.h>
using namespace std;

//끝나는 시간오름차순 정렬
//끝나는 시간 같으면 시작하는 순서대로
bool compare(pair<int, int> &p1, pair<int, int> &p2) {
    if(p1.second != p2.second)
        return p1.second < p2.second;
    else
        return p1.first < p2.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;
    //회의 시간 입력받음
    vector<pair<int,int>> times;
    //배정된 회의들
    stack<pair<int, int>> reserv;

    for(int i=0;i<count;i++) {
        int start;
        int end;
        cin >> start >> end;
        times.push_back(make_pair(start, end));
    }

    sort(times.begin(), times.end(), compare);

    //정렬된 회의 중 첫번째 회의 배정
    int answer = 0;
    reserv.push(times[0]);
    answer++;

    //스택의 회의들 비교하면서 배정
    for(int i=1;i<count;i++) {
        if(times[i].first >= reserv.top().second) {
            answer++;
            reserv.push(times[i]);
        }
    }
    cout << answer;
}