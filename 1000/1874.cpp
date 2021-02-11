#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> stack;
    int count;
    cin >> count;

    int arr[count+1];

    vector<char> answer;

    for(int i=0;i<count;i++) {
        cin >> arr[i];
    }
    int index = 0;

    for(int i=1;i<=count;i++) {
        stack.push(i);
        answer.push_back('+');

        //스택에 뭐가 있고, 스택의 top 이 배열값과 같을 동안 pop
        while(!stack.empty() && stack.top() == arr[index]) {
            index++;
            stack.pop();
            answer.push_back('-');
        }
    }
    if(!stack.empty()) cout << "NO" <<"\n";
    else for(auto s : answer) cout << s << "\n";
}