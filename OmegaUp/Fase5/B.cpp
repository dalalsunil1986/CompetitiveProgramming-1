#include <bits/stdc++.h>

using namespace std;

int main(){
    double n; cin >> n;

    vector<double> a(n);

    for(int i=0;i<n;i++) cin >> a[i];

    double r1=0;
    double r2=0;

    for(int i=0;i<n;i+=2) r1 += a[i];
    for(int i=1;i<n;i+=2) r2 += a[i];

    double r = max(r1,r2);
    
    cout << fixed << setprecision(1);
    cout << r << endl;

}