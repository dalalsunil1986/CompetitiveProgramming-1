#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> s;
    stack<int> ms;

    int n; cin >> n;

    while(n--){
        int d; cin >> d;
        if(d==1){
            int e; cin >> e;
            s.push(e);
            if(ms.empty()) ms.push(e);
            else if(e > ms.top()) ms.push(e);
            else ms.push(ms.top());

        }else if(d ==2){
            s.pop();
            ms.pop();
        }else if(d == 3){
            cout << ms.top() << endl;
        }
    }
}