#include <iostream>
using namespace std;

int main() {
    double n=0;
    cin>>n;
    double suma=0;
    int cont=0;
    for(int i=0; i<n; i++){
        double elem=0;
        cin>>elem;
        if(elem>=0){
            suma+=elem;
            cont++;
        }
    }
    double res = suma/cont;
    cout<<res<<endl;
}
