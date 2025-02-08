#include <iostream>
#include <vector>
using namespace std;
int main() {
    int l=0, d=0, x=0;
    cin>>l;
    cin>>d;
    cin>>x;
    vector<int> suma;
    for(int i=l; i<=d; i++){
        int numero=0, aux=0;
        numero=i;
        while(numero!=0){
            aux=aux+numero%10;
            numero=numero/10;
        }
        if(aux==x){
            suma.push_back(i);
        }
    }
    int mini=0, maxi=0;
    for(int i=0; i<suma.size(); i++){
        if(i==0){
            mini=suma[i];
            maxi=suma[i];
        }else{
            if(mini>suma[i]){
                mini=suma[i];
            }
            if(maxi<suma[i]){
                maxi=suma[i];
            }
        }
    }
    cout<<mini<<endl<<maxi<<endl;
    return 0;
}
