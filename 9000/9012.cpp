#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;
    for(int i=0;i<count;i++) {
        stack<char> s;
        bool check = true;

        string input;
        cin >> input;

        for(int j=0;j<input.length();j++) {
            if(input[j] == '(')
                s.push(input[j]);
            else if(s.empty()) {
                check = false;
                break;
            }
            else if(input[j] == ')' && s.top() == '(')
                s.pop();

        }

        if(s.empty() && check)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}