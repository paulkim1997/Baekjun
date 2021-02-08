#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[3];
    for(int i=0;i<3;i++) {
        cin >> arr[i];
    }
    int max = 0;

    //3개 모두 동일
    if(arr[0] == arr[1] && arr[1] == arr[2]) {
        cout << 10000 + arr[0]*1000;
    } //3개중 2개만 동일
    else if(arr[0] == arr[1]) {
        cout << arr[0]*100 + 1000;
    } else if(arr[1] == arr[2]) {
        cout << arr[1]*100 + 1000;
    } else if(arr[0] == arr[2]) {
        cout << arr[0]*100 + 1000;
    } //모두 다름
    else {
        for(int i =0;i<3;i++) {
            if(max < arr[i])
                max = arr[i];
        }
        cout << max * 100;
    }
}

//더 나은 풀이 찾은건, sort 이용해서 정렬하고 비교
//그럼 2개의 값이 같은 경우는 0,1,2 중 0,1 이나 1,2뿐