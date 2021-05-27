//테이블 정의
//D[i] = i번째 까지 부분 수열의 길이

#include <bits/stdc++.h>
using namespace std;

int D[1002];
int S[1002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> S[i];
    }

    int ans = 0;

    //입력된 수열의 모든 경우의 수 탐색
    for(int i=0;i<n;i++) {

        //현재 자기 자신은 길이가 1이다!
        D[i] = 1;

        //자기 자신 이전의 값들 확인
        //10 20 10 30 일때 30을 보면, 20의 경우 D[i] 가 2일테니까 max 2, 3을 통해 3
        for(int j=0;j<i;j++) {
            if(S[i] > S[j]) {
                D[i] = max(D[i], D[j] + 1);
            }
        }
        ans = max(ans, D[i]);

    }

    cout << ans;

}