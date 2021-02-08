#include <bits/stdc++.h>
using namespace std;

int arr[21];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count = 0;
    cin >> count;
    //Y통신사
    int total1 = 0;
    //M통신사
    int total2 = 0;

    for(int i=0;i<count;i++) {
        cin >> arr[i];
        total1 = total1 + (arr[i]/30+1)*10;
        total2 = total2 + (arr[i]/60+1)*15;
    }

    if(total1 == total2) {
        cout << "Y M " << total1;
    } else if(total1 < total2) {
        cout << "Y " << total1;
    } else if(total1 > total2) {
        cout << "M " << total2;
    }
}

//처음에 arr 배열을 크기 3으로 선언하고, 입력 하는걸 3개만 받고 왜 틀렸지 고민함
//ㅂㅅ인가
