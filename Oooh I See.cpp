#include <iostream>
using namespace std;

int main() {
    int fila, columna;
    cin >> fila >> columna;
    char matriz[fila][columna];
    for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            char car;
            cin >> car;
            matriz[i][j] = car;
        }
    }
    int contador=0;
    int posx=0, posy=0;
    for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            if(matriz[i][j]=='0' && i>0 && j>0 && i<fila-1 && j<columna-1){
                if(matriz[i-1][j-1]!='0' && matriz[i-1][j]!='0' && matriz[i-1][j+1]!='0' &&
                   matriz[i+1][j-1]!='0' && matriz[i+1][j]!='0' && matriz[i+1][j+1]!='0' &&
                   matriz[i][j-1]!='0' && matriz[i][j+1]!='0'){
                    contador++;
                    posx=i;
                    posy=j;
                }
            }
        }
    }
    if(contador==0){
        cout<<"Oh no!"<<endl;
    }else if(contador>1){
        cout<<"Oh no! "<<contador<<" locations"<<endl;
    }else{
        cout<<posx+1<<" "<<posy+1<<endl;
    }
    return 0;
}
