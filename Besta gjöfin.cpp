#include <iostream>
#include <string>
using namespace std;

int  main(){
    int n=0;
    cin>>n;
    if(n>=1 && n<=1000){
        string nom="";
        int pun=0;
        bool band=false;
        for(int i=0; i<n; i++){
            string nomAux="";
            int punAux=0;
            cin>>nomAux>>punAux;
            if(nomAux.size()>=1 && nomAux.size()<=20){
                if(punAux>=0 && punAux<=1000){
                    if(punAux>pun){
                        pun = punAux;
                        nom = nomAux;
                    }
                }else{
                    return 0;
                }
            }
        }
        cout<<nom<<endl;
    }

    return 0;
}
