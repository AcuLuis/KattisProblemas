#include <iostream>
using namespace std;
int main(){
    int n=0;
    int k=0;
    cin>>n;
    cin>>k;
    if(n>=0 && n<=2*1e9){
        if(k>=1 && k<=1e3){
            int co = n/k;
            cout<<co+2022;
        }
    }
}
