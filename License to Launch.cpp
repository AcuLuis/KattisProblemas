#include <iostream>
#include <vector>
using namespace std;

int main(){
    int mini=0, pos=0, n=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int aux=0;
        cin>>aux;
        if(i==0){
            mini=aux;
        }else{
            if(mini>aux && mini!=aux){
                mini=aux;
                pos=i;
            }
        }
    }
    cout<<pos<<endl;
    return 0;
}
