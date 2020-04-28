#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    double p[n+1];

    for(int i=1;i<=n;i++) cin >> p[i];

    double dp[n+1][n+1]; memset(dp,0,sizeof(dp));

    dp[0][0] = 1;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            dp[i][j] = dp[i-1][j]*(1-p[i]);
      	    if(j)dp[i][j]+= dp[i-1][j-1]*p[i];  
        }
    }

    double total =0;

    for(int i=n/2+1;i<=n;i++) total += dp[n][i];

    cout << fixed << setprecision(10) << endl;
    cout << total << endl;

}