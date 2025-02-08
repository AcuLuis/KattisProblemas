#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<string> numeros;
    for(int i=0; i<n; i++){
        string numero;
        cin>>numero;
        numeros.push_back(numero);
    }
    for(string c: numeros){
        cout<<c.size()<<endl;
    }
    return 0;
}
