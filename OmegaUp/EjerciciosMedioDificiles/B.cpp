#include <bits/stdc++.h>

using namespace std;

int main(){
    double n; cin >> n;

    char a[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

    string result = "";

    while(n > 15){
    
        double div = n / 16;
        double rest = div - (long long int)n/16;
        int r = rest * 16;
        result += a[r];
        n = (long long int)n/ 16;
    }

    result += a[(int)n];

    for(int i=result.size()-1;i>=0;i--){
        cout << result[i];
    }

    cout << endl;
}