#include <iostream>
#include <string>
using namespace std;
int main() {
    string linea;
    cin>>linea;
    if(linea.size()<1 && linea.size()>50) return 0;
    for(char c: linea){
       if(c<'A' || c>'C') return 0;
    }
    int izq=1, med=0, der=0;
    for(char c: linea){
        int aux=0;
        if(c=='A'){
            aux=izq;
            izq=med;
            med=aux;
        }else if(c=='B'){
            aux=med;
            med=der;
            der=aux;
        }else{
            aux=izq;
            izq=der;
            der=aux;
        }
    }
    if(izq==1){
        cout<<1<<endl;
    }else if(med==1){
        cout<<2<<endl;
    }else if(der==1){
        cout<<3<<endl;
    }
    return 0;
}
