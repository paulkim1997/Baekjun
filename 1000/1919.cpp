#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int answer=0;
    string input1, input2;

    cin >> input1 >> input2;

    for(auto c : input1)
        arr[c-'a']++;

    for(auto c : input2)
        arr[c-'a']--;

    for(int i=0;i<26;i++) {
        if(arr[i] <0)
            answer+= arr[i]*(-1);
        else answer += arr[i];
    }
    cout << answer;
}