#include <bits/stdc++.h>

#define W first
#define V second
#define ll long long int

using namespace std;

const ll INF = 1e18;

int main(){
    ll n,w; cin >> n >> w;

    vector<ll> weigth(n);
    vector<ll> values(n);

    for(int i=0;i<n;i++){
        cin >> weigth[i] >> values[i];
    }
    
    ll sum=0; for(ll a : values) sum += a;

    vector<ll> dp(sum+1,INF);

    dp[0] = 0;

    for(ll i=0;i<n;i++){
        for(ll j=sum; j>= values[i]; j--){
            dp[j] = min(dp[j],dp[j - values[i]] + weigth[i]);
        }
    }

    ll mx=0;

    for(ll i=0;i<=sum;i++){
        if(dp[i] <= w)
            mx = max(mx,i);
    }

    cout << mx << endl;
}