#include <iostream>
#include <vector>
using namespace std;
int main() {
    int fil=0,col=0,datos=0;
    cin>>fil>>col>>datos;
    vector<vector<int>> posicion;
    for(int i=0; i<datos; i++){
        vector<int> posxy;
        int posx=0, posy=0;
        cin>>posx>>posy;
        posxy={posx, posy};
        posicion.push_back(posxy);
    }
    vector<string> matriz;
    for(int i=0; i<fil; i++){
        string linea="";
        for(int j=0; j<col; j++){
            linea+=".";
        }
        matriz.push_back(linea);
    }
    for(int i=0; i<posicion.size(); i++){
        int x=posicion[i][0]-1;
        int y=posicion[i][1]-1;
        matriz[x][y]='*';
    }
    for(string c: matriz){
        cout<<c<<endl;
    }
    return 0;
}
