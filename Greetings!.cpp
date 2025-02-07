#include<string.h>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    string cad;
    cin>>cad;

    if(cad.size()>=3 && cad.size()<=1000){
        string cadena;
        cadena = cad.substr(1, cad.size()-2);
        cadena = "h"+cadena+cadena+"y";
        cout<<cadena;
    }
}
