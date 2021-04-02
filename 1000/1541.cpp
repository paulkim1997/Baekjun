#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string input;
    cin >> input;
    stack<int> numbers;
    stack<char> op;

    for(int i=0;i<input.size();i++) {
        string num ="";
        if(isdigit(input[i])) {
            while(isdigit(input[i])) {
                num += input[i];
                i++;
            }
            numbers.push(stoi(num));
            i--;
        } else {
            op.push(input[i]);
        }
    }

    int answer = 0;

    while(!numbers.empty()) {
        if(numbers.size() == 1) {
            answer += numbers.top();
            numbers.pop();
            cout << answer;
            return 0;
        }
        int num1, num2;

        char op1 = op.top(); op.pop();

        if(op1 == '+') {
            num1 = numbers.top(); numbers.pop();
            num2 = numbers.top(); numbers.pop();
            numbers.push(num1 + num2);
        } else if (op1 == '-') {
            num1 = numbers.top(); numbers.pop();
            answer -= num1;
        }
    }
}