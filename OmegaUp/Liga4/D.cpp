#include <bits/stdc++.h>

using namespace std;


int a[200][200] = {};
int n;
int gx,gy;

bool find(int x, int y){
    int sx =0;
    int so =0;
    
    if(x+4 <= n){

    for(int i=0;i<5;i++){
        if(a[y][x+i] == 2) sx++;
        else if(a[y][x+i] == 1) so++; 
        else{
            gx = x+i;
            gy= y; 
        }
    }

    if(sx == 4 || so == 4){
        cout << gx << " " << gy << endl;
    }

    }

    if(y+4 <= n){

    sx=0;
    so=0;

    for(int i=0;i<5;i++){
        if(a[y+i][x] == 2) sx++;
        else if(a[y+i][x] == 1) so++;
         else{
            gx = x;
            gy= y+i; 
        }
    }

    if(sx == 4 || so == 4){
        cout << gx << " " << gy << endl;
    }
    }

    if(y+4 <= n && x+4 <= n){

     sx=0;
    so=0;


    for(int i=0;i<5;i++){
        if(a[y+i][x+i] == 2) sx++;
        else if(a[y+i][x+i] == 1) so++;
        else{
            gx = x+i;
            gy= y+i; 
        }
    }
     if(sx == 4 || so == 4){
                cout << gx << " " << gy << endl;
    }
    }

   
    
    return false;
}

int main(){
    cin >> n;

    int d; cin >> d;

    for(int i=0;i<d;i++){
        int x,y,z; cin >> x >> y >> z;

        a[y][x] = z+1;
    }

    bool fi = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            //cout << a[i][j] << " ";
            find(j,i);
                
        }
    }


}