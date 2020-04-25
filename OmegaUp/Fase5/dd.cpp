#include <bits/stdc++.h>

using namespace std;

int select=0;

vector<int> nums;
nums.push_back(1);

int sub(int v){

   while(v > nums.size()){
       vector<int> tmp = nums,
   }
   
    return total;
    
}
int getS(int x){
    int d = (x/4.0);
    select =  (int)pow(2,d+2)-x-1;
    return (pow(2,d+2)/2)*log2(pow(2,d+2))- sub(select)}
int main(){

    int n; cin >> n;

    while(n--){
        int a,b; cin >> a >> b;
        int r = getS(b) - getS(a-1);
        cout << r << endl;
    }

   
}