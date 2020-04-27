#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int dp[n+1][3];
    memset(dp,0,sizeof(dp[0][0]) *(n+1) * 3);

    for(int i=1;i<=n;++i){

        int a[3];

        for(int j=0;j<3;j++){
           cin >> a[j];
        }

        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(j != k){
                    dp[i][k] = max(dp[i][k], dp[i-1][j]+ a[k]);
                }

            }
        }
    }

    cout << max(dp[n][0],max(dp[n][1],dp[n][2])) << endl;
}