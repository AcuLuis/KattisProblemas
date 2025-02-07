#include <iostream>
using namespace std;
int main(){
    string cad;
    cin>>cad;
    int cont = 0;
    for(char j: cad){
        cont++;
    }
    if(cont>=1 && cont<=100000){
        cout<<cont;
    }
}
