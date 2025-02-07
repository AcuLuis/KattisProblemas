#include <iostream>
using namespace std;

int main() {
    int n=0, acum=0;
    cin>>n;
    if(n<1 || n>1e4) return 0;
    for(int i=0; i<n; i++){
        int aux=0;
        cin>>aux;
        if (aux<0 || aux>1e5) return 0;
        acum=acum+aux;
    }
    cout<<acum/n<<endl;
    return 0;
}
