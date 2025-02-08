#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    if(n<0 || n>20000) return 0;
    int suma=0;
    for(int i=0; i<n; i++){
        int fuente;
        cin>>fuente;
        if(fuente<-50000 || fuente>500000) return 0;
        if(fuente<0){
            suma+=fuente;
        }
    }
    cout<<suma*-1<<endl;
    return 0;
}
