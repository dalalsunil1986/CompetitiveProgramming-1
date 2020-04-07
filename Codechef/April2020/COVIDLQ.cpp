#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        bool bad = false;
        bool find = false;
        int d=0;    
        for(int i=0;i<n;i++){
            int v; cin >> v;
            d++;
            if(v == 1){
                if(d < 6 && find){
                    bad = true;
                } 
                d = 0;
                find = true;
            }
        }

        if(bad) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}