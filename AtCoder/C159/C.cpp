#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b; cin >> a >> b;

    for(int i=1;i<1500;i++){
        if((int)(i*.08) == a && (int)(i*.10) == b){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    
}