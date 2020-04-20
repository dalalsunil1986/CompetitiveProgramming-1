#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n; cin >> m >> n;

    int a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    int t; cin >> t;

    int vv=0;
    int vh=0;

    while(t--){
        char v; cin >> v;

        if(v == 'V'){
            vv++;
          
        }else if(v == 'H'){
            vh++;
           
        }
    }

    vv %= 2;
    vh %= 2;

    if(vv){
        for(int i=0;i<n;i++){
                for(int j=0;j<m/2;j++){
                    int temp = a[j][i];
                    a[j][i] = a[m-1-j][i];
                    a[m-j-1][i] = temp;
                }
            }
    }

    if(vh){
         for(int i=0;i<m;i++){
                for(int j=0;j<n/2;j++){
                    int temp = a[i][j];
                    a[i][j] = a[i][n-j-1];
                    a[i][n-j-1] = temp;
                }
            }
    }

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


}