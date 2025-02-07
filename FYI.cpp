#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    long int n=0;
    cin>>n;
    if(n>=1000000 && n<=9999999){
        string numero = to_string(n);
        int cont=0;
        string valida;
        for(char i:numero){
            if(cont<3){
                valida = valida+i;
            }
            cont++;
        }
        if(valida == "555"){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }
}
