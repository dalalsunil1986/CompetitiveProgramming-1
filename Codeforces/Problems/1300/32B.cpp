#include <bits/stdc++.h>

using namespace std;

int main(){
    string w; cin >> w;

    string r = "";

    for(int i=0;i<w.size();i++){
        if(i < w.size()-1 && w[i] == '-' &&  w[i+1] == '.'){
            r+="1";  i++;
        }
        else if(i < w.size()-1 && w[i] == '-' && w[i+1] == '-'){
            r+="2"; i++;
        }else if(w[i] == '.'){
            r+="0";
        }
    }
    
    
    cout << r << endl;
}