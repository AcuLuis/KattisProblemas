#include <iostream>
using namespace std;

int main() {
    int peso=0, pila=0, moneda=0, tugsteno=29260, oro=29370;
    cin >> peso >> pila;
    int posicionMoneda=0;
    for(int i=1; i<pila+1; i++){
        int monedaTotal=0;
        for(int j=1; j<pila+1; j++){
            if(i==j){
                monedaTotal+=oro*i;
            }else{
                monedaTotal+=tugsteno*j;
            }
        }
        if(monedaTotal==peso){
            posicionMoneda=i;
            break;
        }
    }
    cout<<posicionMoneda<<endl;
    return 0;
}
