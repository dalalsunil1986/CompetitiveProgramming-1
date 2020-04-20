#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    priority_queue<long long int,vector<long long int>,greater<long long int>> s;

    while(n--){
        char v; cin >> v;

        if(v == 'R'){
            long long int x; cin >>  x;
            s.push(x);

        }else if(v == 'S'){
            
            if(s.size() >= 3){
                long long int v1 = s.top(); s.pop();
                long long int v2 = s.top(); s.pop();
                long long int v3 = s.top(); s.pop();

                s.push(v1); s.push(v2); s.push(v3);

                cout << v1 << " " << v2 << " " << v3 << endl;
            }else{
                cout << "NO HAY SUFICIENTES PUNTAJES" << endl;
            }
            
        }else if(v == 'B'){
            if(s.size()){
               s.pop();
            }
        }
    }

    while(s.size() > 1){
        s.pop();
    }
    if(s.size()){
        long long int t = s.top();
        cout << "EL PUNTAJE MAS ALTO FUE " << t << endl;
    }else{
        cout << "NO HUBO GANADOR" << endl;
    }
}