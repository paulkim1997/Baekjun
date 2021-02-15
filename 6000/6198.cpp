#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<int> stack;

    int count;
    cin >> count;

    long long answer = 0;
    for(int i=0;i<count;i++) {
        int input;
        cin >> input;

        //스택 비어있으면 그냥 추가
        if(stack.empty())
            stack.push(input);
        else {
            //스택 top보다 낮으면 관찰 가능 이므로 사이즈만큼 더해줌
            if(input<stack.top()) {
                answer += stack.size();
                stack.push(input);
            }
            //스택 top보다 높으면 관찰 불가능하니 관찰 가능할때까지 pop
            else {
                while(!stack.empty() && stack.top() <= input) {
                        stack.pop();
                }
                answer += stack.size();
                stack.push(input);
            }
        }
    }
    cout << answer;
}