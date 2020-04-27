#include <bits/stdc++.h>

using namespace std;

int main(){
    string a; cin >> a;
    
    while(a != "0"){

        if(a.size() == 0) {
            cout << "0" << endl;
        }

        int dp[a.size()] = {};
        dp[0] = a[0] == '0' ? 0 : 1;

        for(int i=1;i<a.size();i++){
            if(a[i] != '0') dp[i] += dp[i-1];
            
            int d2= stoi(a.substr(i-1,2));

            if(d2 >= 10 && d2 <= 26){
                dp[i] += i>=2 ? dp[i-2] : 1;
            }
        }

        cout << dp[a.size()-1] << endl;
        cin >> a;

    }
}