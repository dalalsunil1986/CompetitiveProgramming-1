#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll powerx(ll base,ll pow, ll mo)
{
   ll res=1;
   while(pow)
   {     
         if (pow%2!=0)  res=(res*base)%mo;
         base=(base*base)%mo;
         pow/=2;
   }
   return res;
}

int main(){
    int t; cin >> t;

    while(t--){
        ll n,a; cin>> n >> a;

        long long int total =0;
        long long int prev = 0;

        long long int m = (1e9) + 7;

        for(int i=1;i<=n;i++){
            
        
            long long int c = (2*i-1);

            long long int p =powerx(a,c,m);

            a = ((a%m)* (p%m)) % m;
            total = ((total%m) + (p%m)) % m;
        }

        cout << total  << endl;;
    }
}