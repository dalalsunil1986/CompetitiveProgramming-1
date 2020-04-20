#include <bits/stdc++.h>

using namespace std;

int main(){
    string n; cin >> n;

    vector<char> a;

    for(char c : n)
        a.push_back(c);

    sort(a.begin(),a.end());

    map<char,char> m;

    for(int i=0;i<a.size();i++){
        m[n[i]] = a[i];
    }

    string r="";
    char s = '$';

    for(int i=0;i<a.size();i++){
        char x = m[s];
        r += x;
        s = x;
    }

    cout << r.substr(0,r.size()-1) << endl;
    


}