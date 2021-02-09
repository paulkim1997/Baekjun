#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //초기문자열 입력
    string s;
    cin >> s;
    //문자열을 연결 리스트에
    list<char> list;
    for(int i=0;i<s.length();i++) {
        list.push_back(s[i]);
    }
    //문자열 마지막에 커서 추가
    auto cursor = list.end();

    int count;
    cin >> count;

    while(count--) {
        char op;
        cin >> op;
        switch (op) {
            case 'P': {
                char add;
                cin >> add;
                list.insert(cursor,add);
                break;
            }
            case 'L': {
                if(cursor != list.begin())
                    cursor--;
                break;
            }
            case 'D': {
                if(cursor != list.end())
                    cursor++;
                break;
            }
            case 'B': {
                if(cursor != list.begin()) {
                    cursor--;
                    cursor = list.erase(cursor);
                }
                break;
            }
            default:
                break;
        }
    }

    for(auto i : list)
        cout << i;
}