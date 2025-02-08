#include <iostream>
using namespace std;
int main() {
    int fil=0, col=0;
    cin>>fil>>col;
    int arr[fil][col]={{}};
    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            int elemento=0;
            cin>>elemento;
            arr[i][j]=elemento;
        }
    }
    bool menor=false;
    for(int i=1; i<fil-1; i++){
        for(int j=1; j<col-1; j++){
            int cen=arr[i][j], der=arr[i][j-1], izq=arr[i][j+1];
            int arriba=arr[i+1][j], abajo=arr[i-1][j];
            if(cen<der && cen<izq && cen<arriba && cen<abajo){
                menor=true;
            }
        }
    }
    if(menor){
        cout<<"Jebb"<<endl;
    }else{
        cout<<"Neibb"<<endl;
    }
    return 0;
}
