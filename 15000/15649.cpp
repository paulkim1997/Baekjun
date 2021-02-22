#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
int used[10];

void func(int k) {
    //Base condition 도달하면 배열에 있는것들 출력
    if(k == m) {
        for(int i=0;i<m;i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=1; i<=n;i++) {
        //사용한 적 없는 숫자면
        if(!used[i]) {
            arr[k] = i;
            used[i] = 1;
            func(k+1);
            //재귀 끝나면 used = false 로!
            used[i] = 0;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    func(0);
}
