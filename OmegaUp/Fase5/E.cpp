#include <bits/stdc++.h>

using namespace std;

int select=0;

vector<int> nums;
int i=1;
int sub(int v){
   

   int sum =0;
   for(int i=0;i<v;i++) sum+=nums[i];
   return sum;
}
int getS(int x){
    int d = (x/4.0);
    select =  (int)pow(2,d+2)-x-1;
    return (pow(2,d+2)/2)*log2(pow(2,d+2)) - sub(select);
    }
int main(){
    nums.push_back(1);

    while(nums.size() < 100){
        vector<int> tmp = nums;
        nums.push_back(pow(2,i));
        nums.insert(nums.end(),tmp.begin(),tmp.end());
       i++;
   }
   //for(int num : nums) cout << num << " "; 

    int n; cin >> n;

    while(n--){
        int a,b; cin >> a >> b;
        int r = getS(b);
        cout << r << endl;
    }

   
}