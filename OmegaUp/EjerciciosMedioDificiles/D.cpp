#include <bits/stdc++.h>

using namespace std;

int main(){

    int tiempos=0;
    int total=0;

    int mx=0;

    int v; cin >> v;

    while(v != -1){
        total += v;
        tiempos += v;
         mx = max(mx,tiempos);

        tiempos --;
        cin >> v;
    
    }

    cout << total << " " << mx << endl;

}