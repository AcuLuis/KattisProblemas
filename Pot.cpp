#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    if(n>=1 && n<=10){
        int acum=0;
        for(int i=0; i<n; i++){
            int p=0;
            cin>>p;
            if(p<10 || p>9999){
                return 0;
            }else{
                int exp=0;
                int numero=0;
                exp = p%10;
                numero = p/10;
                int result = pow(numero, exp);
                acum=acum+result;
                if(acum > 1e9){
                    return 0;
                }
            }
        }
        cout<<acum<<endl;
    }
    return 0;
}
