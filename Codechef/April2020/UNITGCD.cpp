#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){

        int n; cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++) a[i] = i+1;
        
        vector<vector<int>> results;


        while(a.size()){
            vector<int> s;
            s.push_back(a[0]);
            a.erase(a.begin(), a.begin()+1);

            for(int i =0;i<a.size();i++){
                bool is=true;

                for(int x : s){
                    if(a[i] != x && __gcd(a[i], x) != 1) is = false;
                }
                if(is){
                    s.push_back(a[i]);
                    a.erase(a.begin()+i, a.begin()+i+1);
                }
            }
            results.push_back(s);
        }

        cout << results.size() << endl;

        for(auto r : results){
            cout << r.size() << " ";
            for(int x : r){
                cout << x << " "; 
            }
            cout << endl;
        }
    }
}