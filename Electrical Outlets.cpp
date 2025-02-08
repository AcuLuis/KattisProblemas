#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=0;
    cin >> n;
    vector<int> enchufe;
    for(int i=0; i<n; i++){
        int aux=0, suma=0;
        cin>>aux;
        for(int j=0; j<aux; j++){
            int placa=0;
            cin>>placa;
            suma+=placa;
        }
        suma=suma-(aux-1);
        enchufe.push_back(suma);
    }
    for(int i=0; i<enchufe.size(); i++){
        cout<<enchufe[i]<<endl;
    }
    return 0;
}
