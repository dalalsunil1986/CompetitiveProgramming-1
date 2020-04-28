#include <bits/stdc++.h>


using namespace std;

const long long int mod = (1e9)+7;

int main(){
    int h,w; cin >> h >> w;

    int arr[h][w];

    for(int i=0;i<h;i++){
        string a; cin >> a;

        for(int j=0;j<w;j++){
            if(a[j] == '.')
                arr[i][j] = 0;
            else
                arr[i][j] = 1;
        }
    }

    long long int dp[h][w]={};

    if(arr[0][0] == 0)
        dp[0][0] = 1;
   
    for(int i=1;i<h;i++){
        if(!arr[i][0]) dp[i][0] = dp[i-1][0];
        else dp[i][0] = 0;
    }
    for(int i=1;i<w;i++){
        if(!arr[0][i]) dp[0][i] = dp[0][i-1];
        else dp[0][i] = 0;
    }

    for(int i=1;i<h;i++){
        for(int j=1;j<w;j++){
            if(arr[i][j]==0) 
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
        }
    }

    cout << dp[h-1][w-1] % mod << endl;
}