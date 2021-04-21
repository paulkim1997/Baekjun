#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> v;

    //추 개수 만큼 입력 받음
    for(int i=0;i<n;i++) {
        int w; cin >> w;
        v.push_back(w);
    }

    //오름차순 정렬
    sort(v.begin(), v.end());

    //무게 누적합
    int weight = 0;

    //시작부터 1이 없으면
    if(v[0] != 1) {
        cout << 1;
        return 0;
    } else {
        //추 개수 만큼 반복하면서, 누적합+1 보다 다음 원소가 크면 break
        for(int i=0;i<n;i++) {
            if(v[i] > weight+1) break;
            weight += v[i];
        }
    }

    //break 하기 전 까지의 누적합 + 1 출력
    cout << weight + 1;
}
