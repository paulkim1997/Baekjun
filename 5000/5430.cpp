#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    for(int i=0;i<t;i++) {
        deque<string> dq;
        bool check = true;
        string p; cin >>p;
        int n; cin >> n;
        string input; cin >> input;
        //0이면 왼쪽, 1이면 오른쪽
        int rFlag = 0;

        //입력 형식 [1,2,3,4] 에서 숫자만 추출해 dq에 담음
        for(int j=0;j<input.size();j++) {
            if(input[j] == '[' || input[j] == ']' || input[j] == ',') continue;
            else {
                string temp = "";

                //2자리 숫자를 위해
                while(input[j] != '[' && input[j] != ']' && input[j] != ',') {
                    temp += input[j];
                    j++;
                }
                dq.push_back(temp);
            }
        }

        //연산 시작
        for(int j=0;j<p.size();j++) {
            if(p[j] == 'R') {
                //R이면 뒤집어
                if(rFlag == 0)  rFlag = 1;
                else rFlag = 0;
            } else if (p[j] == 'D') {
                //D이면 비어있지 않을때 뽑아
                //비어있으면 에러 출력하고 끝!
                if(!dq.empty()) {
                    if(rFlag == 0) dq.pop_front();
                    else dq.pop_back();
                } else {
                    cout << "error" << "\n";
                    check = false;
                    break;
                }
            }
        }

        //출력 부분
        if(check) {
            cout << "[";
            if(!dq.empty()) {
                if(rFlag == 0) {
                    for(int j=0;j<dq.size()-1;j++){
                        cout << dq[j] << ",";
                    }
                    cout << dq.back();
                } else {
                    for(int j=dq.size()-1;j>0;j--){
                        cout << dq[j] << ",";
                    }
                    cout << dq.front();
                }
            }
            cout << "]" << "\n";
        }
    }
}
