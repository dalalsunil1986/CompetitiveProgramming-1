#include <bits/stdc++.h>

using namespace std;
wchar_t cToLower(wchar_t c) {        
    return std::tolower(c, std::locale());    
}

int main(){
    string w; cin >> w;

    std::locale::global(std::locale(""));  // (*)
    std::wcout.imbue(std::locale());
    auto& f = std::use_facet<std::ctype<wchar_t>>(std::locale());

    std::wstring str = L"Zoë Saldaña played in La maldición del padre Cardona.";

    int m=0;
    for(char a : w)
        if(isupper(a))m++;
    
    int l = w.size()-m;

    if(l >= m){
         f.toupper(w[0]);

        cout << w << endl;
    }
    else{
        transform(w.begin(), w.end(), w.begin(), ::toupper); 
        
        cout << w << endl;
    }
}