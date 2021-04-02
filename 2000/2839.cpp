//그리디 문제
//문제 보고 든 생각: 5개짜리를 최대한 많이 사용하고,
//5로 나눈 나머지가 3으로 나누어 떨어지면 최적
//for 문을 5로 나눈 몫 부터 시작해서 5를 최대한 많이 사용하도록
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;
    int ans = 0;
    bool check = false;

    for(int i=num/5;i>=0;i--) {
        if((num -5*i)%3 == 0) {
            ans += i;
            ans += (num-5*i)/3;
            check = true;
            break;
        }
    }
    if(check)
        cout << ans;
    else
        cout << -1;
}