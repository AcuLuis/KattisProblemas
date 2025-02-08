#include <iostream>
using namespace std;
int main(){
    int mayor=0, idx=0;
    for(int i=0; i<5; i++){
        int suma=0;
        for(int j=0; j<4; j++){
            int pun=0;
            cin>>pun;
            suma+=pun;
        }
        if(mayor<suma){
            mayor=suma;
            idx=i+1;
        }
    }
    cout<<idx<<" "<<mayor<<endl;
    return 0;
}
