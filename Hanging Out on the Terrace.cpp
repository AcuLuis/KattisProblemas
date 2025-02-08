#include <iostream>
using namespace std;

int main() {
    int limite=0,eventos=0;
    cin>>limite>>eventos;
    int suma=0, rechazo=0;
    for(int i=0; i<eventos; i++){
        string instruccion;
        int personas;
        cin>>instruccion>>personas;
        if(instruccion=="enter"){
                if(personas<=(limite-suma)){
                    suma+=personas;
                }else{
                    rechazo++;
                }
        }else{
            suma-=personas;
        }
    }
    cout<<rechazo<<endl;
    return 0;
}
