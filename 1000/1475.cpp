#include <bits/stdc++.h>
using namespace std;
int arr[10];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int number;
    cin >> number;
    if(number == 0) {
        arr[0]++;
    }

    while(number != 0) {
        int temp = number % 10;
        //6이나 9일때
        if(temp ==6 || temp == 9) {
            //6을 9로 대체할 수 있거나, 9를 6으로 대체할 수 있을때
            if(arr[6] != arr[9]) {
                //6을 사용할 수 있으면
                if(arr[6] < arr[9])
                    arr[6]++;
                //9를 사용할 수 있으면
                else
                    arr[9]++;
            } //6,9 아닌 다른숫자
            else {
                arr[temp]++;
            }
        } //나머지 숫자들
        else {
            arr[temp]++;
        }
        number /= 10;
    }
    //배열에 저장돼있는 최대값 찾아서 출력
    int max = 0;
    for(int i=0;i<11;i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max;
}