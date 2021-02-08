#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int total = 0;

    for(int i=0;i<9;i++) {
        int a = 0;
        cin >> a;
        total += a;
        v.push_back(a);
    }

    bool check = false;

    for(int i=0;i<9;i++) {
        total -= v[i];
        for(int j=i+1;j<9;j++) {
            total -= v[j];

            if(total == 100) {
                check = true;
                v[i] = 0;
                v[j] = 0;
                break;
            }
            total += v[j];
        }
        total += v[i];
        if(check) {
            break;
        }
    }

    sort(v.begin(),v.end());

    for(int i=2;i<9;i++) {
        cout << v[i] << "\n";
    }
}

//해결 하지 못한 이유 : 브루트포스(완전탐색)에 대해 모르고있었음
//전체를 탐색해 전체합 - 두마리 난쟁이 합 = 100 일때 를 기준으로 하면 됨
//혼자 다른 알고리즘 고민해보다가 풀이 보고 허무함