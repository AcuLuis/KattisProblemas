#include<bits/stdc++.h>

using namespace std;
int main(){
    int n=0;
    float suma=0;
    bool val=false;
    cin>>n;
    if(n>=1 && n<=100){
        for(int i=0; i<n;i++){
            float calidad=0, vida=0;
            cin>>calidad>>vida;
            if((calidad>0 && calidad<=1) && (vida>0 && vida<=100)){
                suma+=(calidad*vida);
            }else{
                val=true;
            }
        }
        if(val==false){
            cout<<suma<<endl;
        }
    }

}
