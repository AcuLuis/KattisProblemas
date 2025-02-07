#include <iostream>
#include <vector>
using namespace std;
int calcula(int tengo, int debo){
    int res=0;
    if(tengo>debo){
        res = debo-tengo;
    }else if(tengo<debo){
        res = debo-tengo;
    }else{
        return res;
    }
    return res;
}
int main() {
    vector<int> piezas={1, 1, 2, 2, 2, 8};
    int rey=0, reina=0, torre=0, alfil=0, caballo=0, peon=0;

    cin>>rey>>reina>>torre>>alfil>>caballo>>peon;

    if(0<=rey<=10 && 0<=reina<=10 && 0<=torre<=10 &&
       0<=alfil<=10 && 0<=caballo<=10 && 0<=peon<=10){
        vector<int> p ={rey, reina, torre, alfil, caballo, peon};
        for(int i=0; i<p.size(); i++){
            cout<<calcula(p[i], piezas[i])<<" ";
        }
    }
    return 0;
}
