#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long int n, a,b; cin >> n >> a >> b;

    long long int r = (n / (a+b)) * a;

    if((n % (a+b)) < a){
        r += n % (a+b);
    }else{
        r += a;
    }
    cout << r << endl;
    
    return 0;
}