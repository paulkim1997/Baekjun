#include <bits/stdc++.h>
using namespace std;

string arr[10000];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    list<char> answer;

    int count;
    cin >> count;

    for(int i=0;i<count;i++) {
        answer.clear();
        auto it = answer.begin();

        string input;
        cin >> input;

        for(int j=0;j<input.length();j++) {
            if(input[j] == '<') {
                if(it != answer.begin())
                    it--;
            } else if(input[j] == '>') {
                if(it != answer.end())
                    it++;
            } else if(input[j] == '-') {
                if(it != answer.begin()) {
                    it--;
                    it = answer.erase(it);
                }
            } else {
                //insert 는 삽입하고, 삽입한 원소 가리키며 반환
                //it++ 해줄 필요가 없었음
                answer.insert(it, input[j]);
            }
        }
        for(auto c : answer)
            cout << c;
        cout << "\n";
    }
}