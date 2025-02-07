#include<iostream>
using namespace std;
int main(){
    int n=0, m=0;
    bool val = false;
    int acumula=0, contNo=0;
    cin>>n>>m;
    if(n>=1 && n<=100){
        if(m>=1 && m<=50){
            for(int i=0; i<m; i++){
                int ele=0;
                cin>>ele;
                if((acumula+ele)<=n){
                    acumula=acumula+ele;
                }else{
                    contNo++;
                }
            }
        }
    }
    cout<<contNo<<endl;
}
