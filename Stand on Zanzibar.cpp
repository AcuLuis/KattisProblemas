#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    if(t<0 || t>13) return 0;
    vector<int> tortugas;
    for(int i=0; i<t; i++){
        int n=1, aux=1, suma=0;
        while(n!=0){
            n=1;
            cin>>n;
            if(n==0) break;
            if(n<aux) return 0;
            if(n>2*aux){
                suma = suma+(n-2*aux);
                aux = n;
            }else{
                aux = n;
            }
        }
        tortugas.push_back(suma);
    }
    for(int tor: tortugas){
        cout<<tor<<endl;
    }
    return 0;
}
