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
            tp++;
        }else{
            f+= w[i];
        }
        if(tp >= 2) break;
    }

    for(int i=f.size()-1;i>=0;i--){
        if(w[i] == '0') f.erase(i);
        else 
            break; 
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

    string amax="";
    string amin="";

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
            max = calif;
            amax = nom;
           
        }else if(calif == max){
            if(nom < amax){
                amax = nom;
            }
        }

        if(calif < min){
            min = calif;
            amin = nom;
        
        }else if(calif == min){
            if(nom < amin){
                amin = nom;
            }
        }
    }

    cout << fixed << setprecision(2);

    cout << "PROMEDIO GRUPAL: " << total / ta << endl;
    cout << "ALUMNOS APROBADOS " << aprobados << endl;
    cout << "AlUMNOS REPROBADOS " << reprobados << endl;

    cout << amax << " " << ron(to_string(max))<< endl;
    cout << amin << " " << ron(to_string(min)) << endl;

}