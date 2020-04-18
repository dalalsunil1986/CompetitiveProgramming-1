#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n; cin >> n;

    long long int a[n];

    long long int sum =0;
    long long int sumd =0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
        sumd += pow(a[i],2);
    }
 
    long long int sumsq = pow(sum,2); 
  
    long long int result = (sumsq - sumd)/2;
  
    cout << result << endl;
}