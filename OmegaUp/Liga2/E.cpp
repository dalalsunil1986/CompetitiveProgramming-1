#include <bits/stdc++.h>

using namespace std;

map<char,int> vocals;

int numVocals(string word){

    int c= 0;
    for(char a : word){
        if(vocals[tolower(a)] == 1){
            c++;
        }
    }
    return c;
}

int main(){

    vocals['a'] = 1;
    vocals['e'] = 1;
    vocals['i'] = 1;
    vocals['o'] = 1;
    vocals['u'] = 1;

    string word;

    cin >> word;

    cout << word.size() << endl;
    cout << numVocals(word) << endl;

    for(int i=word.size()-1; i>=0; i--){
        cout << word[i]; 
    }

    cout << endl;
}