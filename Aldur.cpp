#include<iostream>
using namespace std;

int main (){

    int n=0;
    cin>>n;

    int mini=0;

    for(int i=0; i<n; i++){
        int aux=0;
        cin>>aux;
        if(i==0){
            mini=aux;
        }else{
            if(mini>aux){
                mini=aux;
            }
        }
    }

    cout<<mini<<endl;
    return 0;
}
