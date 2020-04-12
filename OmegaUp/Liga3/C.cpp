#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    int posX = 0;
    int posY = 0;

    int dir=1;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           int v; cin >> v;
           a[i][j] = v;
        }
    }

    while(posX < m && posX >= 0 && posY < n && posY >= 0){
            
        int paso = a[posY][posX];

        if(paso == 0){
            
        }else if(paso == 1){
            dir+=1;
        }else if(paso == 2){
            dir-=1;
        }else if(paso == 3){
            dir +=2;
        }

        dir = dir%4;

        switch (dir)
        {
            case 1:
                posX +=1;
                break;
            case 2:
                posY +=1;
                break;
            case 3:
                posX -=1;
                break;
            case 4:
                posY -=1;
                break;
        }

        if(posX == m-1 && posY == n-1){
            cout << "llegaste" << endl;
            return 0;
        }        
   
    }
    cout << "te perdiste" << endl;
    
  
}