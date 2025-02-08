#include<iostream>
using namespace std;

int main (){
    int x=0, y=0;
    cin>>x>>y;
    int acumx=0;
    for(int i=0; i<x; i++){
        int idx=0, idy=0;
        cin>>idx>>idy;
        acumx=acumx+(idx*idy);
    }
    int acumy=0;
    for(int i=0; i<y; i++){
        int idx=0, idy=0;
        cin>>idx>>idy;
        acumy=acumy+(idx*idy);
    }

    if(acumx==acumy){
        cout<<"same"<<endl;
    }else{
        cout<<"different"<<endl;
    }

    return 0;
}
