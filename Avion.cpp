#include <iostream>
#include <vector>
using namespace std;

vector<int> encontrarAvion(vector<string> aviones){
    vector<int> posiciones={};
    for(int i=0; i<aviones.size(); i++){
        for(int j=0; j<aviones[i].size(); j++){
            if(aviones[i][j]=='F' && aviones[i][j+1]=='B' && aviones[i][j+2]=='I'){
                posiciones.push_back(i+1);
            }
        }
    }
    return posiciones;
}

int main() {
    int n=5;
    vector<string> aviones;
    for(int i=0; i<n; i++){
        string codigo;
        cin>>codigo;
        aviones.push_back(codigo);
    }
    vector<int> FBI = encontrarAvion(aviones);
    if(FBI.size()==0){
        cout<<"HE GOT AWAY!"<<endl;
    }else{
        for(int i=0; i<FBI.size(); i++){
            cout<<FBI[i]<<" ";
        }
    }
    return 0;
}
