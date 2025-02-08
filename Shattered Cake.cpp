#include <iostream>
using namespace std;

int main() {
    int ancho=0, trozos=0;
    cin>>ancho;
    cin>>trozos;
    if(ancho<1 || ancho>10000) return 0;
    if(trozos<1 || trozos>5000000) return 0;
    int suma=0;
    for(int i=0; i<trozos; i++){
        int anchoi=0, largoi=0;
        cin>>anchoi>>largoi;
        if(anchoi<1 || anchoi>10000) return 0;
        if(largoi<1 || largoi>10000) return 0;
        suma+=(anchoi*largoi);
    }
    int res = suma/ancho;
    cout<<res<<endl;
}
