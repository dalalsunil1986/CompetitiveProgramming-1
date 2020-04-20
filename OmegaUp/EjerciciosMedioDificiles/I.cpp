#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int n; cin >> n;

    while(n--){
        string num = "";

        unsigned long long int a,b; cin >> a >> b;

        num += to_string(a-b);
        num += to_string(a+b);

        cout << num << endl;
    }
}