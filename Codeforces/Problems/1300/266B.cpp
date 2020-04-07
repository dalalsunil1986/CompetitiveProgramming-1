#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t; cin >> n >> t;

    char a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;j++){
            if(a[j] == 'B' && a[j+1] == 'G'){
                a[j] = 'G';
                a[j+1] = 'B';
                j++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << a[i];
    }
    cout << endl;

    
}