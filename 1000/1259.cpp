#include <bits/stdc++.h>
using namespace std;

int check[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;


    while(cin >> n) {
        bool check = true;

        if (n == "0")
            break;

        //펠린드롬 이면 yes 출력하기
        for (int i = 0; i < n.size() / 2; i++) {
            if (n[i] != n[n.size() -1 - i]) {
                check = false;
                break;
            }
        }

        if(check)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }

}