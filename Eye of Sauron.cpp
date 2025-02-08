#include <iostream>
#include <string>
using namespace std;

int main(){
    bool aprueba=false;
    string aux;
    getline(cin, aux);
    for(int i=0; i<(aux.size()-1)/2; i++){
        if(aux[i]!=aux[aux.size()-(i+1)]){
            aprueba=true;
            break;
        }
    }
    if(aprueba){
        cout<<"fix"<<endl;
    }else{
        cout<<"correct"<<endl;
    }
    return 0;
}
