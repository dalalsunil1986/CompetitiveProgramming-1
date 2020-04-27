#include <bits/stdc++.h>

#define W first
#define V second
#define ll long long int

using namespace std;

int main(){
    ll n,w; cin >> n >> w;

    vector<pair<ll,ll>> v;

    for(int i=0;i<n;i++){
        ll a,b; cin >> a >> b;
        v.push_back({a,b});
    }

    ll dp[n+1][w+1]; memset(dp,0,sizeof(dp));

    for(ll i=1; i<=n;i++){
        for(ll j=1;j<=w;j++){
            if(v[i-1].W <= j){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i-1].W]+v[i-1].V);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[n][w] << endl;
}