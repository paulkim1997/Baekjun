//단순히 정렬하는문제
//벡터에 넣어놓고 sort 사용하자
//compare 함수 구현해서 sort 파라미터에 넣어주면 됨
#include <bits/stdc++.h>
using namespace std;

bool compare(string &a, string &b) {
    if(a.size() == b.size())
        return a<b;
    else
        return a.size()<b.size();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    vector<string> inputs;

    for(int i=0;i<count;i++) {
        string a;
        cin >> a;
        inputs.push_back(a);
    }

    sort(inputs.begin(), inputs.end(), compare);

    inputs.erase(unique(inputs.begin(), inputs.end()),inputs.end());

    for(auto s : inputs)
        cout << s << '\n';
}