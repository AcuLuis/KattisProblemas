#include <iostream>
using namespace std;

int  main(){
    int n=0, x=0;
    cin>>n>>x;
    if(n>=1 && n<=1e6){
        if(x>=1 && x<=1e8){
            int suma=0;
            for(int i=0; i<n; i++){
                int aux=0;
                cin>>aux;
                if(aux>=1 && aux<=1e8){
                    suma+=aux;
                }else{
                    return 0;
                }
            }
            if(suma<=x){
                cout<<"Jebb"<<endl;
            }else{
                cout<<"Neibb"<<endl;
            }
        }
    }
    return 0;
}
