#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int a[3] = {};

    while(n--){
        for(int i=0;i<3;i++){
            int v;
            cin >> v; a[i] += v;
        }
    }

    if(!a[0] && !a[1] && !a[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
}