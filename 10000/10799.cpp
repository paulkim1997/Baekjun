#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int answer = 0;
    stack<char> stack;
    string input;
    cin >> input;

    for(int i=0;i<input.length();i++) {
        if(input[i] == '(' && input[i+1] != NULL && input[i+1]== ')') {
            answer += stack.size();
            i++;
        } else if(input[i] == '(') {
            stack.push(input[i]);
        } else if(input[i] == ')') {
            stack.pop();
            answer++;
        }
    }
    cout<< answer;
}