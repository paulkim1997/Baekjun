#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c;
    cin >> a >> b >> c;
    long long multiple = a*b*c;

    while(multiple!=0) {
        int temp = multiple%10;
        arr[temp]++;
        multiple = multiple/10;
    }
    for(int i =0;i<10;i++) {
        cout << arr[i] << "\n";
    }
}
