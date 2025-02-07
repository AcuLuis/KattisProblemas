#include<iostream>
using namespace std;
int main(){
    int n=0;
    bool val=false;
    int acumula=0;
    cin>>n;
    if(n>=1 && n<=1e4){
        for(int i=0; i<n; i++){
            int ele=0;
            cin>>ele;
            if(ele>=1 && ele<=1e5){
                acumula = acumula + ele;
            }
        }
    }
    if((acumula%3)==0){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
}
