#include <bits/stdc++.h>

using namespace std;

string ron(string w){

    string f = "";

    bool point=false;
    int tp=0;
    for(int i = 0; i<w.size();i++){
        if(w[i] == '.'){
            point = true;
            f += w[i];
        }else if(point){
            f += w[i];
        }else{
            f+= w[i];
        }
    }

    if(point){

    for(int i=f.size()-1;i>=0;i--){
        if(f[i] == '0') f.erase(i);
        else 
            break; 
    }
    
    if(f[f.size()-1] == '.') f.erase(f.size()-1);
    }

    return f;
}


int main(){
    int n; cin >> n;
    int ta =n;
    double total=0;
    int aprobados=0;
    int reprobados=0;

    double max=-1;
    double min=101;

    vector<string> amax;
    vector<string> amin;

    while(n--){
        cin >> ws;
        string nom; getline(cin,nom);
        
        double calif; cin >> calif;

        while(calif < 0 || calif > 100){
            cout << "UPS, ERROR!, DIGITE DE NUEVO LA CALIFICACION DE " << nom << endl;
            cin >> calif;
        }

        total += calif;

        if(calif >= 60) aprobados++;
        else reprobados++;

        if(calif > max){
            amax.clear();
            amax.push_back(nom);

            max = calif;
           
        }else if(calif == max){
            amax.push_back(nom);
            
        }

        if(calif < min){
            amin.clear();
            amin.push_back(nom);
            min = calif;
        
        }else if(calif == min){
             amin.push_back(nom);

        }
    }

    cout << fixed << setprecision(2);


    cout << "PROMEDIO GRUPAL: " << total / ta << endl;
    cout << "ALUMNOS APROBADOS " << aprobados << endl;
    cout << "ALUMNOS REPROBADOS " << reprobados << endl;

    sort(amax.begin(),amax.end());
    sort(amin.begin(),amin.end());

    cout << amax[0] << " " << ron(to_string(max))<< endl;
    cout << amin[0] << " " << ron(to_string(min)) << endl;

}

