#include <iostream>
using namespace std;

int main() {
    int n=0, p=0, c=0;
    cin >> n >> p >> c;
    int cont=0;
    for(int i=0; i<n; i++){
        int aux=0;
        cin >> aux;
        if(aux>(p+c)){
            cont++;
            c=p;
            p=aux;
        }
    }
    cout<<cont<<endl;
    return 0;
}
