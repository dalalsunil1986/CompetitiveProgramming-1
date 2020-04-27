#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;

    int a[n]; 
    for(int i=0;i<n;i++) cin >> a[i];

    vector<int> dp(n,INT_MAX);

    dp[0] = 0;

    for(int i=0;i<n;i++){
        for(int j=i+1; j<i+1+k;j++){
            if(j<n)
                dp[j] = min(dp[j],dp[i] + abs(a[i] -a[j]));
        }
    }

    cout << dp[n-1] << endl;
}