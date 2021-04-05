//에라 뭐시기의 체 사용하자
//n까지 소수 아닌 것 표시 하자

#include <bits/stdc++.h>
using namespace std;

int numbers[1000001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m,n;
    cin >> m >> n;

    for(int i = 2 ; i<=n;i++) {
        numbers[i] = i;
    }

    for(int i=2;i<=n;i++) {
        if(numbers[i] == 0) continue;
        for(int j=i*2; j<=n;j+=i)
            numbers[j] = 0;
    }

    for(int i=m;i<=n;i++) {
        if(numbers[i] != 0)
            cout << numbers[i] << "\n";
    }

}