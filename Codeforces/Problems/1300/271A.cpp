#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    n++;

    while(true){
        map<char,bool> m;
        string num = to_string(n);

        bool repeat = false;
        for(char a: num){
            if(m[a]) repeat = true;
            m[a] = true;
        }

        if(!repeat){
            cout << num << endl;
            return 0;
        } 
        n++;
    }
}