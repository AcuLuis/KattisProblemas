#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int inicio=1, suma=0, cont=0;
    while(suma<n){
        inicio++;
        suma=inicio*(inicio+1)*(inicio+2);
        cont++;
    }
    cout<<cont<<endl;
    return 0;
}
