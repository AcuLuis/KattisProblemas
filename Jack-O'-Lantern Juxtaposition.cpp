#include<bits/stdc++.h>
using namespace std;

int main(){
    int ojo=0, nariz=0, boca=0;
    cin>>ojo>>nariz>>boca;
    if((ojo>=1 && ojo<=500)&&(nariz>=1 && nariz<=500)&&(boca>=1 && boca<=500)){
        int resultado=0;
        resultado = ojo*nariz*boca;
        cout<<resultado;
    }

}
