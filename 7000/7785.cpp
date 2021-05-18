#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    set<string> s;
    cin >> count;

    for(int i=0;i<count;i++){
        string name, log;
        cin >> name >> log;
        if(log =="enter") s.insert(name);
        else s.erase(name);
    }

    auto iter = s.end();

    while(1) {
        iter--;
        cout << *iter << "\n";
        if(iter == s.begin()) break;
    }
}