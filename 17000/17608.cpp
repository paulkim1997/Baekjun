#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    int max = 0;
    int answer = 0;
    stack<int> s;
    cin >> count;
    for(int i=0 ;i<count;i++) {
        int num;
        cin >> num;
        s.push(num);
    }
    for(int i=0;i<count;i++) {
        int num = s.top(); s.pop();
        if(num > max) {
            max = num;
            answer++;
        }
    }
    cout << answer;

}