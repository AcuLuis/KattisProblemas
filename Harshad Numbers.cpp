#include <iostream>
using namespace std;
int main() {
    long n=0;
    cin>>n;
    int suma=0, aux=n;
    while(n!=0){
        suma=suma+(n%10);
        n=n/10;
    }
    if(aux%suma==0){
        cout<<aux<<endl;
    }else{
        bool val=true;
        n=aux;
        while(val){
            n=n+1;
            int auxx=n;
            int suma=0;
            while(n!=0){
                suma+=(n%10);
                n=n/10;
            }
            if(auxx%suma==0){
                val=false;
                aux=auxx;
            }else{
                n=auxx;
            }
        }
        cout<<aux<<endl;
    }
    return 0;
}
