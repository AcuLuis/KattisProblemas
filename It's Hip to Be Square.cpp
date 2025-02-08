#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<int> azulejos;
    for(int i=0; i<n; i++){
        int fichas=0;
        cin>>fichas;
        int capacidad=0, cont=0;
        while(fichas-capacidad>=0){
            cont++;
            capacidad+=8*cont;
        }
        azulejos.push_back(cont-1);
    }
    for(int c: azulejos){
        cout<<c<<endl;
    }
    return 0;
}
