#include <bits/stdc++.h>


using namespace std;

int main(){
    int n; cin >> n;

    vector<double> a(n);

    double sum = 0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i] = log(a[i]);
        sum += a[i];
    }

    double avg = sum / n;

    double sd = 0;
    for(int i=0;i<n;i++){
        sd+= pow(a[i] - avg,2);
    }

    double var = sd / (n-1);

    double des = sqrt(var);

    double vs = avg - (2*des);
    double  s = avg - des;
    double m = avg;
    double l = avg + des;
    double vl = avg + (2*des);

    cout << std::fixed << std::setprecision( 2 );

    cout << exp(vs) << endl;
    cout << exp(s) << endl;
    cout << exp(m) << endl;
    cout << exp(l) << endl;
    cout << exp(vl) << endl;


}