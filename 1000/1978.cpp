//에라 뭐시기의 체 사용하자
//n까지 소수 아닌 것 표시 하자

#include <bits/stdc++.h>
using namespace std;

int numbers[1001];
int input[1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int answer = 0;
    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        input[a] = a;
    }

    for(int i=2 ; i<=1000;i++) {
        numbers[i] = i;
    }

    for(int i=2;i<=1000;i++) {
        if(numbers[i] == 0) continue;
        for(int j=i*2; j<=1000;j+=i)
            numbers[j] = 0;
    }

    for(int i=2;i<=1000;i++) {
        if(numbers[i] == input[i] &&  numbers[i] != 0)
            answer++;
    }

    cout << answer;

}