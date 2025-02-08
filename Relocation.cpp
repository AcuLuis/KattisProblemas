#include <iostream>
#include <vector>
using namespace std;
int main() {
    long n_empresa=0, cambios=0;
    cin>>n_empresa>>cambios;
    vector<long> emp_posicion;
    for(int i=0; i<n_empresa; i++){
        long emp=0;
        cin>>emp;
        emp_posicion.push_back(emp);
    }
    vector<long> pos;
    for(int i=0; i<cambios; i++){
        short opc=0;
        long ini=0, fin=0;
        cin>>opc>>ini>>fin;
        if(opc==1){
            emp_posicion[ini-1] = fin;
        }else{
            pos.push_back(abs(emp_posicion[fin-1] - emp_posicion[ini-1]));
        }
    }
    for(long r: pos){
        cout<<r<<endl;
    }
    return 0;
}
