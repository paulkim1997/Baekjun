//줄 별로 스택 만들어주고 case문
//push나 pop할때마다 손가락 누르거나 떼니까 answer++;
//1. 스택 비어있으면 push
//2. 다음 음이 눌러져있는 음보다 높으면 push
//3. 다음 음이 현재 눌러져있는 가장 높은 음과 같으면 continue;
//4. 다음 음이 현재 눌러져있는 음보다 낮으면
//     i) 다음 음보다 높게 눌러져있는애들 모두 pop
//     ii) pop하고 비어져있으면 그 음 push
//     iii) pop하고 눌러져있는 가장 높은음이 같으면 continue;
//     iv) 이 모두가 아니여도 push

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    stack<int> s4;
    stack<int> s5;
    stack<int> s6;
    int answer = 0;

    int count, pCount;
    cin >> count >> pCount;
    for(int i=0;i<count;i++) {
        int num, p;
        cin >> num >> p;

        switch(num) {
            case 1: {
                if(s1.empty()) {
                    s1.push(p);
                    answer++;
                } else if(p > s1.top()) {
                    s1.push(p);
                    answer++;
                } else if(p == s1.top()){
                    continue;
                } else {
                    while(!s1.empty() && s1.top() > p) {
                        s1.pop();
                        answer++;
                    }
                    if(s1.empty()) {
                        s1.push(p);
                        answer++;
                    } else if(s1.top() == p) {
                        continue;
                    } else {
                        s1.push(p);
                        answer++;
                    }
                }
                break;
            }
            case 2: {
                if(s2.empty()) {
                    s2.push(p);
                    answer++;
                } else if(p > s2.top()) {
                    s2.push(p);
                    answer++;
                } else if(p == s2.top()){
                    continue;
                } else {
                    while(!s2.empty() && s2.top() > p) {
                        s2.pop();
                        answer++;
                    }
                    if(s2.empty()) {
                        s2.push(p);
                        answer++;
                    } else if(s2.top() == p) {
                        continue;
                    } else {
                        s2.push(p);
                        answer++;
                    }
                }
                break;
            }
            case 3: {
                if(s3.empty()) {
                    s3.push(p);
                    answer++;
                } else if(p > s3.top()) {
                    s3.push(p);
                    answer++;
                } else if(p == s3.top()){
                    continue;
                } else {
                    while(!s3.empty() && s3.top() > p) {
                        s3.pop();
                        answer++;
                    }
                    if(s3.empty()) {
                        s3.push(p);
                        answer++;
                    } else if(s3.top() == p) {
                        continue;
                    } else {
                        s3.push(p);
                        answer++;
                    }
                }
                break;
            }
            case 4: {
                if(s4.empty()) {
                    s4.push(p);
                    answer++;
                } else if(p > s4.top()) {
                    s4.push(p);
                    answer++;
                } else if(p == s4.top()){
                    continue;
                } else {
                    while(!s4.empty() && s4.top() > p) {
                        s4.pop();
                        answer++;
                    }
                    if(s4.empty()) {
                        s4.push(p);
                        answer++;
                    } else if(s4.top() == p) {
                        continue;
                    } else {
                        s4.push(p);
                        answer++;
                    }
                }
                break;
            }
            case 5: {
                if(s5.empty()) {
                    s5.push(p);
                    answer++;
                } else if(p > s5.top()) {
                    s5.push(p);
                    answer++;
                } else if(p == s5.top()){
                    continue;
                } else {
                    while(!s5.empty() && s5.top() > p) {
                        s5.pop();
                        answer++;
                    }
                    if(s5.empty()) {
                        s5.push(p);
                        answer++;
                    } else if(s5.top() == p) {
                        continue;
                    } else {
                        s5.push(p);
                        answer++;
                    }
                }
                break;
            }
            case 6: {
                if(s6.empty()) {
                    s6.push(p);
                    answer++;
                } else if(p > s6.top()) {
                    s6.push(p);
                    answer++;
                } else if(p == s6.top()){
                    continue;
                } else {
                    while(!s6.empty() && s6.top() > p) {
                        s6.pop();
                        answer++;
                    }
                    if(s6.empty()) {
                        s6.push(p);
                        answer++;
                    } else if(s6.top() == p) {
                        continue;
                    } else {
                        s6.push(p);
                        answer++;
                    }
                }
                break;
            }
        }
    }
    cout << answer;
}