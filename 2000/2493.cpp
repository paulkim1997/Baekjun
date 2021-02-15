//스택을 쓰는 아주 유명한 문제 (Stock span problem)

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;
    //번호 , 층 (건물 스택)
    stack<pair<int,int>> stack;

    for(int i=1;i<=count;i++) {
        //건물 층수 입력 받기
        int height;
        cin >> height;
           
        //입력한 건물 push해주기 전에 스택에 있는 건물에서 해당 건물의 신호 받을 건물 있는지 
        //신호 못받는 건물 스택에 있으면 걸러주는 로직
        //스택에 뭐가 있지만, 스택에 있는 높이가 지금 높이보다 낮으면,
        //스택에 있는 건물이 신호 못받으니까 pop
        while(!stack.empty() && stack.top().second < height)
            stack.pop();

        //스택 비어있으면 신호 받을 애가 없다는 얘기
        if(stack.empty())
            cout << "0 ";
        else //걸러주는 로직 거쳐도 있으면 해당 건물은 신호 잘 받음
            cout << stack.top().first << " ";

        //새로운 건물 push
        stack.push(make_pair(i,height));
    }

}
