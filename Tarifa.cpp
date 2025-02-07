#include<bits/stdc++.h>

using namespace std;
int main(){
    int x=0;
    bool val=false;
    cin>>x;
    if(x>=1&&x<=100){
        int n=0;
        int suma=0;
        cin>>n;
        if(n>=1 && n<=100){
            for(int i=0;i<n;i++){
                int mega=0;
                cin>>mega;
                if(mega>=0 && mega<=10000){
                    int resu=x-mega;
                    suma+=resu;
                }else{
                    val=true;
                }
            }
        }
        if(val==false){

            cout<<suma+x<<endl;
        }
    }
}
