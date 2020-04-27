#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    
    while(n != 0){
        string a = to_string(n);
        if(a.size() == 0 || a[0] == '0') {
            cout << "0" << endl;
        }

        int dp[a.size()+1] = {};
        dp[0] = 1;

        for(int i=1;i<a.size();i++){
            if(a[i] != '0') dp[i] += dp[i-1];

            int d2= stoi(a.substr(i,2));

            if(d2 >= 10 && d2 <= 26){
                dp[i+1] += dp[i-1];
            }
        }

        cout << dp[a.size()] << endl;
        cin >> n;

    }
}