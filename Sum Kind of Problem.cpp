#include <iostream>
#include <vector>
#include <string>
using namespace std;
int suma_hasta(int num){
    int res;
    res=(num*(num+1))/2;
    return res;
}
int suma_par(int num){
    int res;
    res=(num*(num+1));
    return res;
}
int suma_impar(int num){
    int res;
    res=num*num;
    return res;
}
int main() {
    int n=0;
    cin>>n;
    vector<string> resultados;
    for(int i=0; i<n; i++){
        int k=0, numero=0;
        cin>>k>>numero;
        string fila;
        fila=to_string(k)+" "+to_string(suma_hasta(numero))+" "+to_string(suma_impar(numero))+" "+to_string(suma_par(numero));
        resultados.push_back(fila);
    }
    for(string c: resultados){
        cout<<c<<endl;
    }
    return 0;
}
