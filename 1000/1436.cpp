#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int i = 666;
    cin >> n;
    int series = 0;
    while(1) {
        string temp = to_string(i);
        for(int i=0;i<temp.size()-2;i++) {
            if(temp[i] == '6' && temp[i+1] == '6' && temp[i+2] == '6') {
                series++;
                if(series == n) {
                    cout << temp;
                    return 0;
                }
                break;
            }
        }
        i++;
    }
}

