#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int a=0,b=0,c=0,d=0,e=0;
    cin>>a>>b>>c>>d>>e;
    if(e>=0 && e<d && d>e && d<c && c>d && c<b && b>c && b<a && a>b && a<=100){
        int prom=0;
        cin>>prom;
        if(prom>=a){
            cout<<"A"<<endl;
        }else if(prom>=b && prom<a){
            cout<<"B"<<endl;
        }else if(prom>=c && prom<b){
            cout<<"C"<<endl;
        }else if(prom>=d && prom<c){
            cout<<"D"<<endl;
        }else if(prom>=e && prom<d){
            cout<<"E"<<endl;
        }else{
            cout<<"F"<<endl;
        }
    }
}
