#include <iostream>
using namespace std;

int main() {
    int carbono=0;
    cin >> carbono;

    int extiende = 2;
    int columna = 6+extiende*(carbono-1);
    char matriz[5][columna];

    for(int i=0; i<5; i++){
        for(int j=0; j<columna; j++){
            if((i==0 || i==4) && (j%2==0 && j!=0) && j!=columna-2){
                matriz[i][j]='H';
            }else if((i==1 || i==3) && (j%2==0 && j!=0) && j!=columna-2){
                matriz[i][j]='|';
            }else if((i==2) && (j%2==0 && j!=0) && j!=columna-2){
                matriz[i][j]='C';
            }else if((i==2) && (j%2!=0) && j!=columna-1){
                matriz[i][j]='-';
            }else if(i==2 && (j==0 || j==columna-1)){
                matriz[i][j]='H';
            }else if(i==2 && j==columna-2){
                matriz[i][j]='O';
            }else{
                matriz[i][j]=' ';
            }
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<columna; j++){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }

    return 0;
}
