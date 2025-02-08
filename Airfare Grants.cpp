#include<iostream>
using namespace std;

int main (){
    int n=0;
    cin>>n;
    int mini=0, maxi=0;
    for(int i=0; i<n; i++){
        int precio=0;
        cin>>precio;
        if(i==0){
            mini=precio;
            maxi=precio;
        }else{
            if(maxi<precio){
                maxi=precio;
            }
            if(mini>precio){
                mini=precio;
            }
        }
    }
    if(mini-(maxi/2)<=0){
        cout<<0<<endl;
    }else{
        cout<<mini-(maxi/2)<<endl;
    }
    return 0;
}
