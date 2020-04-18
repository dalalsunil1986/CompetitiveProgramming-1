#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    vector<int> list(n);

    for(int i=0;i<n*2;i++){
        int v; cin >> v;
        list[i] += v;
    }
    
    for(int i=0;i<n-1;i++){
        cout << list[i] << " ";
    }

    cout << list[n-1] << endl;
}