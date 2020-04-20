#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long int  n, q; cin >> n >> q;

        long long int  st=0;
        long long int s=0;
        for(long long int i=0;i<q*2;i++){
            int v; cin >> v;
            
            st += abs(v-s);
            s = v;
        }

        cout << st << endl;
    }
}