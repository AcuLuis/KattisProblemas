#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    if(n<1 || n>500) return 0;
    vector<vector<string>> cadenas;
    for(int i=0; i<n; i++){
        vector<string> palabras;
        for(int j=0; j<2; j++){
            string cadena;
            cin>>cadena;
            if(cadena.size()<1 || cadena.size()>50) return 0;
            for(char c: cadena){
                if(!isalpha(c) && !isalnum(c)){
                    return 0;
                }
            }
            palabras.push_back(cadena);
        }
        cadenas.push_back(palabras);
    }
    vector<string> simbolos;
    for(int i=0; i<n; i++){
        string ccc="";
        string cad1 = cadenas[i][0];
        string cad2 = cadenas[i][1];
        for(int j=0; j<cad1.size(); j++){
           if(cad1[j] == cad2[j]){
                ccc+=".";
           }else{
                ccc+="*";
           }
        }
        simbolos.push_back(ccc);
    }
    for(int i=0; i<n; i++){
        cout<<cadenas[i][0]<<endl;
        cout<<cadenas[i][1]<<endl;
        cout<<simbolos[i]<<endl;
    }
    return 0;
}
