#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    int n=0;
    char letra;
    string cadena;

    cin>>n;
    cin>>letra;
    cin>>cadena;

    bool valida=false;

    for(char x: cadena){
        if(x==letra){
            valida=true;
        }
    }

    if(valida){
        cout<<"Unnar fann hana!"<<endl;
    }else{
        cout<<"Unnar fann hana ekki!"<<endl;
    }
}
