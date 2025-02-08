#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int fil=0,col=0;
    cin>>fil>>col;
    cin.ignore();
    vector<string> carriles;
    for (int i=0;i<fil;i++) {
        string carril;
        getline(cin,carril);
        carriles.push_back(carril);
    }
    int cars0=0, cars1=0, cars2=0, cars3=0, cars4=0;
    for (int i=0;i<carriles.size()-1;i++) {
        for (int j=0;j<carriles[i].size()-1;j++) {
            string celda = string(1, carriles[i][j])+string(1, carriles[i][j+1]) +
                           string(1, carriles[i+1][j])+string(1, carriles[i+1][j+1]);
            int edificio=0, carros=0, libre=0;
            edificio = count(celda.begin(), celda.end(), '#');
            carros = count(celda.begin(), celda.end(), 'X');
            libre = count(celda.begin(), celda.end(), '.');
            if(edificio==0){
                if(carros==0){
                    cars0++;
                }else{
                    if(libre==3){
                        cars1++;
                    }
                    if(libre==2){
                        cars2++;
                    }
                    if(libre==1){
                        cars3++;
                    }
                    if(libre==0){
                        cars4++;
                    }
                }
            }
        }
    }
    cout<<cars0<<endl;
    cout<<cars1<<endl;
    cout<<cars2<<endl;
    cout<<cars3<<endl;
    cout<<cars4<<endl;
    return 0;
}
