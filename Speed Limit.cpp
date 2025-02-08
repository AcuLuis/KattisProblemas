#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<int> respuesta;
    while(n!=-1){
        vector<int> millas;
        vector<int> horas;
        for(int i=0; i<n; i++){
            int s=0, t=0;
            cin>>s>>t;
            if(s<1 || s>90) return 0;
            if(t<1 || t>12) return 0;
            if(i==0){
                int aux = s*t;
                horas.push_back(t);
                millas.push_back(aux);
            }else{
                if(t-horas[i-1]<0) return 0;
                int aux = (s*(t-horas[i-1]));
                horas.push_back(t);
                millas.push_back(aux);
            }
        }
        int suma=0;
        for(int j=0; j<millas.size(); j++){
            suma=suma+millas[j];
        }
        respuesta.push_back(suma);
        n=0;
        cin>>n;
    }
    for(int i=0; i<respuesta.size(); i++){
        cout<<respuesta[i]<<" "<<"miles"<<endl;
    }
    return 0;
}
