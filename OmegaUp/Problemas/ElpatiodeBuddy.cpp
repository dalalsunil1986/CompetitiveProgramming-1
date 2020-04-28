#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,q; cin >> n >> m >> q;

    int arr[n][m]; 

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    
    int dp[n+1][m+1];memset(dp,0,sizeof(dp));

    dp[0][0] = arr[0][0];

    for(int i=1;i<n;i++) dp[i][0] = dp[i-1][0] + arr[i][0];
    for(int i=1;i<m;i++) dp[0][i] = dp[0][i-1] + arr[0][i];

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(i ==0)
            dp[i][j] = (dp[i][j-1] - dp[i-1][j-1]) + dp[i-1][j] +arr[i][j];
        }
    }

    for(int i=1;i<=q;i++){
        int x,y,x1,y1; cin >> y >> x >> y1 >> x1; 
        x--; y--;x1--;y1--;
        int a = dp[y1][x1];
        int b = x-1 >=0 ? dp[y1][x-1] : 0;
        int c = y-1 >= 0 ? dp[y-1][x1] : 0;
        int d = x-1 >= 0 && y-1 >= 0 ? dp[y-1][x-1] : 0;
        int r = a -b -c +d;
        cout << "Pregunta #" << i<<": " << r << endl;
    }

}