#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int map[4][3] = {{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};

    int t; cin >> t;

    set<int> nums;

    for(int x = 0;x<4;x++){
        for(int y=0;y<3;y++){

            for(int i=x;i<4;i++){
                for(int j=y; j<3;j++){

                        for(int c=i;c<4;c++){
                        for(int v=j; v<3;v++){
                            if(map[x][y] != -1 && map[i][j] != -1  && map[c][v] != -1 ){
                                string num = to_string(map[x][y]) + to_string(map[i][j]) + to_string(map[c][v]);
                                string num2 = to_string(map[i][j]) + to_string(map[c][v]);
                                string num3 = to_string(map[c][v]);
                                
                                nums.insert(stoi(num));
                                nums.insert(stoi(num2));
                                nums.insert(stoi(num3));
                            }
                            
                        }   
                    }  
                }   
            }  
        }
    }

    while(t--){
        int n; cin >> n;

        auto r= nums.find(n);


        if(r == nums.end()){

            auto upi = nums.upper_bound(n);

            int up = *upi;
            int low = *--upi;

            int u = abs(up-n);
            int l =  abs(low-n);

            if(u < l){
                cout << up << endl;
            }else{
                cout << low << endl;
            }

        }else{
            cout << *r << endl;
        }


        
    }
    
        
}