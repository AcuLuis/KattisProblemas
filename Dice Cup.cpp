#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    int n=0, m=0;
    cin>>n>>m;
    if(n<4 || n>20) return 0;
    if(m<4 || m>20) return 0;
    vector<int> puntos;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int suma=0;
            suma = (i+1) + (j+1);
            puntos.push_back(suma);
        }
    }
    unordered_map<int, int> puntaje;
    for(int i: puntos){
        puntaje[i]++;
    }
    int mayor=0;
    for(const auto& par: puntaje){
        if(par.second>mayor){
            mayor=par.second;
        }
    }
    vector<int> mayores;
    for(const auto& par: puntaje){
        if(par.second==mayor){
            mayores.push_back(par.first);
        }
    }
    sort(mayores.begin(), mayores.end());
    for(int i=0; i<mayores.size(); i++){
        cout<<mayores[i]<<endl;
    }
    return 0;
}
