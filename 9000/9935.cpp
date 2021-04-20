#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string input;
    string bomb;
    char result[1000001];
    int index = 0;
    cin >> input >> bomb;

    for(int i=0;i<input.size();i++) {
        result[index++] = input[i];

        if(input[i] == bomb[bomb.size()-1] && index >= bomb.size()) {
            //폭탄인지 확인
            bool check = true;

            for(int j=0;j<bomb.size();j++) {
                if(bomb[bomb.size()-1-j] != result[index-1-j]) {
                    check = false;
                    break;
                }
            }
            //폭탄이면 제거
            if(check) {
                index -= bomb.size();
            }
        }
    }

    if(!index)
        cout << "FRULA";
    else {
        for(int i=0;i<index;i++){
            cout << result[i];
        }
    }
}
