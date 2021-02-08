#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b;
    cin >> a >> b;
    if(a==b) {
        cout << 0;
    } else if(a<b) {
        cout << b - a - 1 << "\n";
        for(long long i=a+1;i<b;i++) {
            cout << i << " ";
        }
    } else if(a>b) {
        cout << a - b - 1 << "\n";
        for(long long i=b+1;i<a;i++) {
            cout << i << " ";
        }
    }
}

//출력 초과가 계속 났던 이유
//a랑 b 범위는 long long 인거 이해 했지만,
//for 문에서 출력할때도 long long 사용해 줬어야 했네