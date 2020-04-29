#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n < 2) return false;

    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0) return false;
    }
    return true;

}

long long int getNf(int n){
     double phi = (1 + sqrt(5)) / 2; 
    return round(pow(phi, n) / sqrt(5)); 
}
int main(){
    int n; cin >> n;   

    if(isPrime(n)) cout << "Primo" << endl;
    else cout << getNf(n) << endl;
}