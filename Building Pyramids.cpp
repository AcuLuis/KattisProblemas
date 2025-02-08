#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int pot=1, suma=0, cont=0;
    while(suma<n){
        pot+=2;
        cont++;
        suma=suma+(pot*pot);
    }
    cout<<cont<<endl;
    return 0;
}
