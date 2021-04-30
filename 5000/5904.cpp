#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    //입력한 n 이 몇 번째 수열에 포함되는지?
    //totLength = 수열 전체 길이, midLength = 수열의 중간 부분 길이
    int totLength = 3;
    int midLength = 3;
    while(n > totLength) {
        totLength = totLength*2 + ++midLength;
    }

    while(1) {
        //t 는 이전 문자열의 길이
        int t = (totLength-midLength)/2;

        if(n <= t) {
            midLength--;
            totLength = t;
        } else if(n > t + midLength) {
            n -= t + midLength;
            midLength--;
            totLength = t;
        } else {
            n -= t;
            break;
        }
    }

    if(n == 1)
        cout << "m";
    else
        cout << "o";

}