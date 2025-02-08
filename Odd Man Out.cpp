#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<long long> cods;
    for(int i=0; i<n; i++){
        vector<long long> codigos;
        int pruebas=0;
        cin>>pruebas;
        for(int j=0; j<pruebas; j++){
            long long codigo=0;
            cin>>codigo;
            codigos.push_back(codigo);
        }
        for(int i=0; i<codigos.size(); i++){
            int cont=0;
            cont = count(codigos.begin(), codigos.end(), codigos[i]);
            if(cont==1){
                cods.push_back(codigos[i]);
            }
        }
    }
    int contador=1;
    for(long long c: cods){
        cout<<"Case #"<<contador<<": "<<c<<endl;
        contador++;
    }
    return 0;
}
