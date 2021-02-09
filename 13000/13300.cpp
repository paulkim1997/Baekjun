#include <bits/stdc++.h>
using namespace std;

//배열 구조
//1학년 | 여자 | 남자 0,0 | 0,1
//2학년 | 여자 | 남자 1,0 | 1,1
//3학년 | 여자 | 남자 2,0 | 2,1
//4학년 | 여자 | 남자
//5학년 | 여자 | 남자
//6학년 | 여자 | 남자

int arr[6][2];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int answer =0;
    int count;
    cin >> count;

    int maximum;
    cin >> maximum;

    for(int i=0;i<count;i++) {
        int sex =0;
        int grade=0;

        cin >> sex >> grade;
        arr[--grade][sex]++;
    }
    for(int i=0;i<6;i++) {
        for(int j=0;j<2;j++) {
            answer += arr[i][j] / maximum;
            if(arr[i][j] % maximum != 0)
                answer++;
        }
    }
    cout << answer;
}