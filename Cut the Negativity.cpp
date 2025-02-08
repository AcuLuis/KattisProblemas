#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<vector<int>> posiciones;
    int cont=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            vector<int> numeros;
            int valor=0;
            cin>>valor;
            if(valor>0){
                numeros.push_back(i+1);
                numeros.push_back(j+1);
                numeros.push_back(valor);
                posiciones.push_back(numeros);
                cont++;
            }
        }
    }
    cout<<cont<<endl;
    for(int i=0; i<posiciones.size(); i++){
        cout<<posiciones[i][0]<<" "<<posiciones[i][1]<<" "<<posiciones[i][2]<<endl;
    }
    return 0;
}
