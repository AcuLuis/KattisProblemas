#include <iostream>
using namespace std;

int  main(){
    int n=0, k=0;
    cin>>n>>k;
    if(n>=1 && n<=1e5){
        if(k>=-1e9 && k<=1e9){
            for(int i=0; i<n; i++){
                int aux=0;
                cin>>aux;
                if(aux==k){
                    if(i==0){
                        cout<<"fyrst"<<endl;
                    }else if(i==1){
                        cout<<"naestfyrst"<<endl;
                    }else{
                        cout<<i+1<<" fyrst"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
