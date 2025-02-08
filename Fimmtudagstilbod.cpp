#include <iostream>
using namespace std;

int main() {
    int anio=0;
    cin>>anio;
    if(anio<1993 || anio>9999) return 0;
    if(anio>=1993 && anio<=2020){
        cout<<1000<<endl;
    }else{
        cout<<(anio-2020)*100+1000<<endl;
    }
    return 0;
}
