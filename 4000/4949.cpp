#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(1) {
        string input;
        getline(cin, input);
        stack<char> stack;
        bool check = true;
        if(input == ".")
            break;

        for(auto c : input) {
            if(c == '(' || c=='[')
                stack.push(c);
            else if(c == ')') {
                if(stack.empty() || stack.top() != '(') {
                    check = false;
                    break;
                }
                stack.pop();
            } else if(c == ']') {
                if(stack.empty() || stack.top() != '[') {
                    check = false;
                    break;
                }
                stack.pop();
            }
        }
        if(!stack.empty()) check = false;

        if(check)
            cout << "yes\n";
        else
            cout << "no\n";

    }
}