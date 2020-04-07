#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        long long int sum=0;

        int dep = 0;
        for(int i=n-1;i>=0;i--){
            sum += a[i] - dep > 0 ? a[i]- dep : 0;
            dep++;
        }

        long long int d = ((1e9)+7);

        cout << sum % d << endl;
    }
}