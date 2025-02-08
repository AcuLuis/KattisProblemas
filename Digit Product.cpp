#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero=0;
    cin >> numero;
    while(true){
        string aux_numero=to_string(numero);
        if(aux_numero.size()==1){
            numero=stoi(aux_numero);
            break;
        }else{
            int aux = numero, multi=1;
            while(aux/10!=0){
                if(aux%10!=0){
                    multi*=(aux%10);
                }
                aux/=10;
            }
            numero=multi*aux;
        }
    }
    cout<<numero<<endl;
    return 0;
}
