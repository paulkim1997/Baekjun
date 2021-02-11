#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> stack;
    int count;
    cin >> count;
    for(int i=0;i<count;i++) {
        int num;
        cin >> num;
        if(num != 0){
            stack.push(num);
        } else if(num ==0) {
            stack.pop();
        }
    }
    int answer =0;
    while(!stack.empty()) {
        answer += stack.top();
        stack.pop();
    }
    cout << answer;
}