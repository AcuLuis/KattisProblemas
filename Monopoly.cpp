#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
double probabilidad(int p){
    double prob=0, numerador=0;
    vector<int> dado1 = {1,2,3,4,5,6};
    vector<int> dado2 = {1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(dado1[i]+dado2[j]==p){
                numerador++;
            }
        }
    }
    prob = numerador/36;
    return prob;
}
int main() {
    int cases=0;
    cin>>cases;
    if(cases<1 || cases>11) return 0;
    vector<double> puntaje;
    for(int i=0; i<cases; i++){
        int puntos=0;
        cin>>puntos;
        if(puntos<2 || puntos>12) return 0;
        puntaje.push_back(probabilidad(puntos));
    }
    double suma=0;
    for(int i=0; i<puntaje.size(); i++){
        suma+=puntaje[i];
    }
    cout<<suma<<endl;
    return 0;
}
