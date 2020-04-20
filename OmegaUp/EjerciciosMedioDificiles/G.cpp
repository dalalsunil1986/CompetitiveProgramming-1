#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<int> s(1e6,0);
    int i=0;

    string r="";

    while(n--){
        char v; cin >> v;

        if(v == 'p'){
            int k; cin >> k;
            if(i<0) i=0;
            s[i] = k;
            i++;
        }else if(v == 'b'){
            int k; cin >> k;
            i-=k;
        }else if(v == 'q'){
            if(i>0) r += to_string(s[i-1]) + "\n";
        }
    }

    cout << r;
}