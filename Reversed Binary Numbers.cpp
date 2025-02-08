#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;
string decimalBinario(long n){
    string binario="";
    while(n>0){
        int aux = n%2;
        if(aux==1){
            binario=binario+"1";
        }else{
            binario=binario+"0";
        }
        n=n/2;
    }
    return binario;
}
long binarioDecimal(string numero){
    long num=0;
    int exp=0;
    for(int i=numero.size()-1; i>=0; i--){
        num = num+(numero[i]-'0')*pow(2, exp);
        exp++;
    }
    return num;
}
int main() {
    long num;
    cin>> num;
    if(num<1 || num>1e9) return 0;
    string numero = decimalBinario(num);
    cout<<binarioDecimal(numero)<<endl;
    return 0;
}
