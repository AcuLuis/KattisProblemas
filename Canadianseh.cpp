#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char n[101];
    int cont=0;
    string pala;
    cin.getline(n,101,'\n');
    if(strlen(n)>=3 && strlen(n)<=100){
        pala = n[strlen(n)-3];
        pala = pala+n[strlen(n)-2];
        pala = pala+n[strlen(n)-1];
        if(pala=="eh?"){
            cout<<"Canadian!"<<endl;
        }else{
            cout<<"Imposter!"<<endl;
        }
    }
}
