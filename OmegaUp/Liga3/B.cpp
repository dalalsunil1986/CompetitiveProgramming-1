#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<int> as(1000000,0);

    
    
    for(int i=0;i<n;i++){
        int p,x; cin >> p >> x;
        if(p == 1){
             as[x]++;
        }else{
            int c =0;
            for(int i=x;i>0;i--){
                c+=as[i];
            }
            cout << c << endl;
        }
    }


   

}