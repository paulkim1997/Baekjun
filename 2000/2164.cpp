#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
int head = 0;
int tail = 0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;

    //입력한 갯수만큼 카드 입력
    for(int i=0;i<count;i++) {
        arr[i] = i+1;
    }
    tail = count;
    for(int i=0;i< count-2;i++) {
        //제일 위에 카드 버리기
        head++;
        //제일 위에 있는 카드 제일 아래로
        arr[tail] = arr[head];
        tail++;
        head++;
    }
    cout << arr[tail-1];
}