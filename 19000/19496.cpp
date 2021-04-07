#include <bits/stdc++.h>
using namespace std;

bool cmp(string &a, string &b) {
    return a+b > b+a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    string answer = "";
    bool check = false;
    vector<string> v;
    cin >> count;

    for(int i=0;i<count;i++) {
        string num;
        cin >> num;
        if(num != "0")
            check = true;
        v.push_back(num);
        sort(v.begin(), v.end(), cmp);
    }
    if(check) {
        for(auto c: v)
            cout << c;
    } else {
        cout << 0;
    }

}