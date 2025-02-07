#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=0,c=0;
    cin>>a>>b>>c;
    int A = b-a;
    int B = c-b;
    if(A>=0 && B>=0){
        if(A==B){
            cout<<"cruised"<<endl;
        }else if(A>B){
            cout<<"braked"<<endl;
        }else if(A<B){
            cout<<"accelerated"<<endl;
        }
    }else if(A<=0 && B<=0){
        if(A==B){
            cout<<"cruised"<<endl;
        }else if(-A>-B){
            cout<<"braked"<<endl;
        }else if(-A<-B){
            cout<<"accelerated"<<endl;
        }
    }else if((A>=0 && B<=0) || (A<=0 && B>=0)){
        cout<<"turned"<<endl;
    }
}
