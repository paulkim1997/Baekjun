//자료구조: 스택
//알고리즘: 계산기 구현과 동일

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int temp = 1;
    int answer = 0;
    stack<char> s;
    string input;
    cin >> input;

    for(int i=0;i<input.size();i++) {
        if(input[i] == '(') {
            temp *= 2;
            s.push(input[i]);
        } else if(input[i] == '[') {
            temp *= 3;
            s.push(input[i]);
        } //올바르지 않은 괄호 인지 먼저 확인
        else if(input[i] == ')' && (s.empty() || s.top() != '(')) {
            cout << 0;
            return 0;
        } else if(input[i] == ']' && (s.empty() || s.top() != '[')) {
            cout << 0;
            return 0;
        } else if(input[i] == ')') {
            if(input[i-1] == '(')
                answer += temp;
            s.pop();
            temp/=2;
        } else if(input[i] == ']') {
            if(input[i-1] == '[')
                answer += temp;
            s.pop();
            temp/=3;
        }
    }

    if(!s.empty())
        cout << 0;
    else
        cout << answer;
}