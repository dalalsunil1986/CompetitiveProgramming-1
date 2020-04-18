#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    
    
    for(int x=1;x<=t;x++){
        int n; cin >> n;
        int k = 0;
        int r = 0;
        int c = 0;
        
        int a[n][n] = {};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }

        vector<vector<int>> columns(n,vector<int>(n,0));
        vector<vector<int>> rows(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j) k+=a[i][j];
                rows[i][j] = a[i][j];
                columns[i][j] = a[j][i];
            }
        }

        for(int i=0;i<n;i++){
            sort(columns[i].begin(),columns[i].end());
            sort(rows[i].begin(),rows[i].end());

            for(int j=0;j<n;j++){
                 cout << columns[i][j] << " ";

                if(columns[i][j] == columns[i][j+1]){
                    c++;
                }
            }
            cout << endl;
            for(int j=0;j<n;j++){
                if(rows[i][j] == rows[i][j+1]){
                    r++;
                    break;
                }
            }
        }
        cout << "Case #" << x << ": "  << k << " " << r << " " << c << endl;      
    }
}