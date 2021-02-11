#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //N,K 입력 받음
    int N, K;
    cin >> N >> K;

    list<int> list;
    vector<int> answer;
    for(int i=0;i<N;i++) {
        list.push_back(i+1);
    }
    auto cursor = list.begin();

    while(!list.empty()) {
        for(int i=0;i<K-1;i++) {
            cursor++;
            if(cursor == list.end())
                cursor = list.begin();
        }
        answer.push_back(*cursor);
        cursor = list.erase(cursor);
        if(cursor == list.end())
            cursor = list.begin();
    }

    cout << "<";
    for(int i=0;i<N;i++) {
        cout << answer[i];
        if(i == N -1)
            cout << ">";
        else
            cout << ", ";
    }
}

//몰랐던 부분: 원형 List 구현 하기 위해 end에 커서가 도착하면
//begin으로 수정