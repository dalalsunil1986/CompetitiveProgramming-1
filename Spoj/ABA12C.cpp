#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,k; cin >> n >> k;

        int weigth[k];
        int prices[k]; 

        for(int i=0;i<k;i++){
            weigth[i] = (i+1);
            cin >> prices[i];
            if(prices[i] == -1) weigth[i] = INT_MAX;
        }


        int dp[k+1] = {0};
       
        for(int i=0;i<=k;i++){
            for(int j=0;j<k;j++){
                if((weigth[j]) <= i){
                    dp[i] = min(dp[i], dp[i-(weigth[j])]+prices[j]);
                }
            }
        }
         for(int i=0;i<k;i++) cout << weigth[i] << " ";
        cout << endl;
        cout << dp[k] << endl;
    }
}