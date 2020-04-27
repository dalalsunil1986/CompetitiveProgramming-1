#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t; cin >> s >> t;

    int dp[s.size()+1][t.size()+1]; memset(dp,0,sizeof(dp));

    for(int i=1;i<=s.size();i++){
        for(int j=1;j<=t.size();j++){
            if(s[i-1] == t[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    int n= s.size();
    int m = t.size();

    string word(dp[n][m],' ');
    int i= dp[n][m]-1;

    while(n && m){
        if(s[n-1] == t[m-1]){
            word[i] = s[n-1];
            n--; m--; i--;
        }else if(dp[n-1][m] > dp[n][m-1]){
            n--;
        }else{
            m--;
        }
    }
    
    cout << word << endl;
 }